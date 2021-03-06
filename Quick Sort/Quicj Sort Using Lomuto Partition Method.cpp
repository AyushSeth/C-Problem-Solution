#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int partition (int a[], int l, int h)
{
   // lomudo partition
   int pivot = a[h] , i = l - 1;
//   cout <<pivot << "  pivot :  " <<h << " h :  ";
   for(int j=l;j<h;j++) {
       if(a[j] < pivot) {
           i++;
           int temp = a[i];
           a[i] = a[j];
           a[j] = temp;
       }
   }
   int temp = a[i+1];
   
   a[i+1] = a[h];
//   cout << a[i+1] <<   "   temp :     ";
   a[h] = temp;
   return i+1;
}
void quickSort(int arr[], int low, int high)
{
    if(low < high) {
        int p = partition(arr,low,high);
        // cout << p<< "  p:  " << arr[0] << " "<< arr[1] << " " <<arr[2] << " "<< arr[3] << " "<< arr[4] << " "<< "  \n";
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

    
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
        quickSort(arr, 0, n-1);
        for(int i = 0;i<n;i++) {
            cout << arr[i] <<" ";
        }
    }
    return 0;
} 