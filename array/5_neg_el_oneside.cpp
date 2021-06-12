// move all negative element to one side of an array. 

#include <iostream>
using namespace std;

#include "./helper.h"

int partition(int arr[], int n) {
  int pivot = 0;
  int i = 0;
  for(int j = 0; j < n-1; j++) {
    if(arr[j] < pivot){
      helper_swap(&arr[i], &arr[j]);
      i++;
    }
  }
  helper_swap(&arr[i], &arr[n-1]);
  return i;
}

void two_pointer_approach(int arr[], int n) {
  int left = 0, right = n-1;
  while(left <= right) {
    if(arr[left] < 0 && arr[right] < 0) {
      left++;
    }else if(arr[left] < 0 && arr[right] > 0) {
      left++;
    }else if(arr[left] >= 0 && arr[right] < 0) {
      helper_swap(&arr[left], &arr[right]);
      left++, right--;
    }else if(arr[left >= 0 && arr[right] >= 0]){
      right--;
    }
  }
}

int main() {
  int n; cin >> n;
  int arr[n];
  helper_input_array(arr, n);
  /* partition(arr, n); */
  /* printf("partition index is: %d", partition(arr, n)); */
  two_pointer_approach(arr, n);
  helper_print_array(arr, n);

  return 0;
}
