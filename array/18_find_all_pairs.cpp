#include <bits/stdc++.h>
using namespace std;

#define pp pair<int, int>

bool comp(pp a, pp b) {
  return a.first < b.first;
}

int getPairsCount(int arr[], int n, int k) {
  // code here
  int pairs = 0;
  vector<pair<int, int>> v;
  for(int i = 0; i < n; i++) {
    v.push_back({arr[i], i});
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n; i++) {
    auto it = lower_bound(v.begin(), v.end(), make_pair(k-arr[i], i), comp);
    if (it != v.end()) {
      while(it != v.end() && it->first == k - arr[i]){
        if((it->second) > i) {
          pairs++;
        }
        it++;
      }

    }
  }
  return pairs;
}

int main() {
  return 0;
}
