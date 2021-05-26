// find the minimum and maximum elements in the array
#include <iostream>
#include <climits>
using namespace std;

#include "./helper.h"

void min_and_max(int arr[], int n, int *min, int *max){
  for(int i = 0; i < n; i++){
    if(*min > arr[i])
      *min = arr[i];
    if(*max < arr[i])
      *max = arr[i];
  }
  return;
}

int main(){
  int n; 
  cin >> n;
  int arr[n];

  helper_input_array(arr, n);

  int min = INT_MAX, max = INT_MIN;

  min_and_max(arr, n, &min, &max);

  cout << "\n min element of array is: " << min \
       << "\n max element of array is: " << max;


  return 0;
}
