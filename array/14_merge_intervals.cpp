#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<vector<int>> &v) {
  printf("**************vector<vector<int>> results: {");
  for(int i = 0; i < v.size(); i++) {
    printf("[%d, %d], ", v[i][0], v[i][1]);
  }
  printf("}**************");
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  vector<vector<int>> results;
  sort(intervals.begin(), intervals.end());
  results.push_back(intervals[0]);
  bool flag = true;
  int a, b, c, d;
  for(int i = 1; i < intervals.size(); i++) {
    /* print_vector(results); */
    flag = true;
    for(int j = 0; j < results.size(); j++) {
      a = results[j][0];
      b = results[j][1];
      c = intervals[i][0];
      d = intervals[i][1];
      /* printf("\n values: [a: %d, b: %d, c: %d, d: %d]\n", a, b, c, d); */
      if( (a >= c && a <= d) || (c >= a && c <= b) ) {
        results[j][0] = (a >= c) ? c : a;
        results[j][1] = (b >= d) ? b : d;
        flag = false;
      }
    }
    if(flag) results.push_back({ c, d });
  }
  return results;

}

int main() {
  vector<vector<int>> v;
  for(int i = 0; i < 5; i++) {
    v.push_back({i, i*5});
    cout << v[i][0] << v[i][1] << endl;
  }
  v = merge(v);
  for(auto x : v) {
    cout << endl;
    for(auto y : x) {
      cout << y << ", ";
    }
  }
  return 0;
}
