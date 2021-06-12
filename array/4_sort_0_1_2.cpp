// FUNCTION ONLY

void sort012(int arr[], int n)
{   int low, mid, high;
    low = mid = 0, high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0) {
            swap(&arr[mid], &arr[low]);
            low++;mid++;
        }else if(arr[mid] == 2) {
            swap(&arr[mid], &arr[high]);
            high--;
        }else{
            mid++;
        }
    }
}
