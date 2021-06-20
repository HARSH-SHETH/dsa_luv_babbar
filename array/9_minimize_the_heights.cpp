#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include "./helper.h"

void print(vector<int> v){
  cout << "\n";
  for (auto x : v) cout << x << ", ";
}
int getMinDiff(int arr[], int n, int k);

int main() {
  int n, k;  cin >> n;
  int arr[n];
  helper_input_array(arr, n);
  cout << "Enter any integer k:";
  cin >> k;
  int diff = getMinDiff(arr, n, k);
  cout << "\n" << diff;
}

int getMinDiff(int arr[], int n, int k) {
  sort(arr, arr+n);
  
  int result = arr[n-1] - arr[0];
  int maxel = arr[n-1] - k;
  int minel = arr[0] + k;

  for(int i = 1; i < n; i++) {
    maxel = max(maxel, arr[i-1] + k);
    minel = min(minel, arr[i] - k);
    result = min(result, maxel - minel);
  }
  return result;
}

