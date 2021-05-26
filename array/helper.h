// COMMON FUNCTION DEFINITIONS

#ifndef HELPER_H
#define HELPER_H
#endif

#include <iostream>
using namespace std;

void helper_input_array(int arr[], int n){
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  return;
}

void helper_print_array(int arr[], int n){
  cout << "\n";
  for(int i = 0; i < n; i++){
    cout << arr[i] << ", ";
  }
  return;
}

void helper_swap(int *a, int *b){
  int temp = *a;
  *a = *b; 
  *b = temp;
  return;
}
