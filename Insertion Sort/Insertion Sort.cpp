#include <stdio.h>
#include <math.h>

void insertionSort(int a[], int n)
{
    for(int i=1;i<n;i++) {
        int key = a[i];
        int j = i-1;
        while ( j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    insertionSort(arr, n);
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    }
    return 0;
}
  