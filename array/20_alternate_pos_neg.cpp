#include <bits/stdc++.h>

#include "./helper.h"
using namespace std;

void rearrangeArray(int arr[], int n){
  sort(arr, arr+n);
  int pos = lower_bound(arr, arr+n, 0) - arr;
  cout << pos;
  for(int i = 1; arr[i] < 0 && pos < n; i += 2){
    swap(arr[i], arr[pos]);
    pos++;
  }
  return;
}

int main() {
  int n; cin >> n;
  int arr[n];
  helper_input_array(arr, n);
  rearrangeArray(arr, n);
  helper_print_array(arr, n);
  return 0;
}
