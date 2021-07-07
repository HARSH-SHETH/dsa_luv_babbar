#include <bits/stdc++.h>
#include "./helper.h"
using namespace std;

int findmin(int a, int b, int c) {
  if(a <= b && a <= c){
    return 1;
  }else if(b <= a && b <= c) {
    return 2;
  }else{
    return 3;
  }
}   

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3) {
  //code here.
  vector<int> duplicates;
  int a = 0, b = 0, c = 0;
  while(a < n1 && b < n2 && c < n3) {
    if(A[a] == B[b] and B[b] == C[c]){
      if(!duplicates.empty()){
        if(duplicates.back() != A[a]){
          duplicates.push_back(A[a]);
        }
      }else{
        duplicates.push_back(A[a]);  
      }
    }
    switch(findmin(A[a], B[b], C[c])){
      case 1: {
                a++;
                break;
              }
      case 2: {
                b++;
                break;
              }
      case 3: {
                c++;
                break;
              }
    }
  }

  return duplicates;
}

int main() {
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  int A[n1], B[n2], C[n3];
  helper_input_array(A, n1);
  helper_input_array(B, n2);
  helper_input_array(C, n3);
  vector<int> duplicates = commonElements(A, B, C, n1, n2, n3);
  cout << endl;
  for(auto x : duplicates) {
    cout << x << ", ";
  }
}
