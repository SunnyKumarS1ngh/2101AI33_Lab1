#include <stdio.h>
//insertion sort
void insertionSort(int arr[],int n){
  int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
  int arr[5] = {5,2,4,9,12};
  insertionSort(arr,5);
  for(int i=0;i<5;i++){
    printf("%d,",arr[i]);
  }

  return 0;
}
