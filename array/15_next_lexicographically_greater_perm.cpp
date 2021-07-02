#include <iostream>
#include <algorithm>
using namespace std;

#include "helper.h"

void next_lex_gr_perm(int arr[], int n){
  int i = n - 2;
  if(i >= 0 && arr[i+1] <= arr[i]){
    i--;
  }

  if(i >= 0) {
    int j = n - 1;
    while(arr[j] <= arr[i]){
      j--;
    }
    helper_swap(&arr[j], &arr[i]);
  }

  reverse(arr+i+1, arr+n);
}

int main() {
  int n; cin >> n;
  int arr[n];
  helper_input_array(arr, n);
  next_lex_gr_perm(arr, n);
  helper_print_array(arr, n);
  return 0;
}
