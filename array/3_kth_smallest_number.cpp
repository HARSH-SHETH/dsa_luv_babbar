// FIND THE KTH SMALLEST ELEMENT FROM AN ARRAY CONSISTING DISTINCT NUMBERS

#include <iostream>
using namespace std;

#include "./helper.h"

int partition(int arr[], int low, int high) {
  int pivot = arr[high-1]; 
  int i = low - 1;

  for(int j = low; j < high; j++){
    if(arr[j] < pivot){
      i++;
      helper_swap(&arr[i], &arr[j]);
    }
  }
  i++;
  helper_swap(&arr[i], &arr[high-1]);
  return i;
}

void quick_sort(int arr[], int low, int high){
  if (low < high) {
    // partition index
    int pi = partition(arr, low, high);
    quick_sort(arr, low, pi-1);
    quick_sort(arr, pi+1, high);
  }
  return;
}

// METHOD 1
// SORT THE ARRAY IN INCREASING ORDER AND PICK THE K-1TH ELEMENT FROM THE ARRAY
int kthSmallest_method1(int arr[], int n, int k){
  int min = arr[0];
  quick_sort(arr, 0, n);
  return arr[k-1];
}


int main(){
  int n, k; cin >> n;
  int arr[n];
  helper_input_array(arr, n);
  cin >> k;

  int result = kthSmallest_method1(arr, n, k);
  printf("\n kth(%d) smallest number is: %d", k, result);


  return 0;
}

