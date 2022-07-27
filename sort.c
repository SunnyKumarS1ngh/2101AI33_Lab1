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
//SelctionSort
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

//bubble sort

void bubblesort(int a[],int n){

    for(int count=1;count<=n-1;count++){

        for(int j=0;j<=n-2;j++){

            if(a[j] > a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
//merge sort
void merge(int *a,int s,int e){
    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++]  = a[j++];
    }

    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }


}

void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,e);

}

//Quick sort
int partition(int a[],int s,int e){
     int i=s;
     int pivot = a[e];
     for(int j=s;j<=e-1;j++){
        if(a[j] < pivot){
            swap(&a[i],&a[j]);
            i++;
        }
     }
     swap(&a[i],&a[e]);
     return i;
}

void quickSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){
  int arr[5] = {5,2,4,12,9};
  quickSort(arr,0,4);
  for(int i=0;i<5;i++){
    printf("%d,",arr[i]);
  }

  return 0;
}
