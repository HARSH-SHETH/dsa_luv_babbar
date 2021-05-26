#include <iostream>
using namespace std;

#include "./helper.h"



int main(){
  int n; 
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  printf("\n original array is: \t");
  helper_print_array(arr, n);

  for(int i = 0, j = n-1; i != j; i++, j--){
    helper_swap(&arr[i], &arr[j]);
  }

  printf("\n reversed array is: \t");
  helper_print_array(arr, n);
}
