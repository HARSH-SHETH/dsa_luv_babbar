#include <iostream>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b; 
  *b = temp;
  return;
}

void print_array(int arr[], int n){
  for(int i = 0; i < n; i++){
    printf("%d, ", arr[i]);
  }
}

int main(){
  int n; 
  scanf("%d", &n);
  int arr[n];

  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  printf("\n original array is: \t");
  print_array(arr, n);

  for(int i = 0, j = n-1; i != j; i++, j--){
    swap(&arr[i], &arr[j]);
  }

  printf("\n reversed array is: \t");
  print_array(arr, n);
}
