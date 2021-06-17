#include <iostream>
#include <climits>
using namespace std;

int main() {
  int arr[] = { -1, -2, -3, -4 };
  int best = INT_MIN, sum = 0;
  for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
    sum = max(arr[i], sum + arr[i]);
    best = max(best, sum);
  }
  cout << best << sum;
  return 0;
}
