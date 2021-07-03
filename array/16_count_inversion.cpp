// count inversions
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include "helper.h"
#define pp pair<long long, int>

bool compare(const pp &l, const pp &r){
  return l.first < r.first;
}

void merge_sort(long long arr[], long long N, int low, int high, long long int *count){
  if(low < high){
    int p = (low + high)/2;
    merge_sort(arr, N, low, p, count);
    merge_sort(arr, N, p+1, high, count);

    int l1 = p - low + 1;
    int l2 = high - p;

    long long a1[l1];
    long long a2[l2];
    for(int i = 0; i < l1; i++) {
      a1[i] = arr[i+low];
    }
    for(int i = 0; i < l2; i++) {
      a2[i] = arr[i+p+1];
    }
    int p1 = 0, p2 = 0, k = low;

    while(p1 < l1 && p2 < l2){
      if(a1[p1] > a2[p2]){
        (*count) += l1 - p1;
        arr[k] = a2[p2];
        p2++;
      }else{
        arr[k] = a1[p1];
        p1++;
      }
      k++;
    }

    while(p1 < l1) {
      arr[k++] = a1[p1++];
    }

    while(p2 < l2) {
      arr[k++] = a2[p2++];
    }
  }
  return;
}

long long int inversionCount(long long arr[], long long N){
  long long int cnt_inv = 0;
  merge_sort(arr, N, 0, N-1, &cnt_inv);
  return cnt_inv;
}

int main() {
  long long n; cin >> n; long long arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << inversionCount(arr, n);

}
