#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{  
  sort(arr, arr+N);
  int len = 1;
  int maxlen = 1;
  for(int i = 0; i < N; i++) cout << arr[i] << ", ";
  cout << endl;
  for(int i = 1; i < N; i++){
    if(arr[i] == arr[i-1]) continue;
    if(arr[i] == arr[i-1]+1){
      len++;
    }else{
      len = 1;
    }
    if(len > maxlen){
      maxlen = len;
    }
  }
  return maxlen;
}

int main(){
  int n; cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << endl << findLongestConseqSubseq(arr, n);
}
