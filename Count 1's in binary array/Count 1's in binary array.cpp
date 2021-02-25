
#include <bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int N)
{
    int count = 0;
    for(int i=0;i<N;i++) {
        if( (1 ^ arr[i]) == 0 ) {
            count++;
        }
    }
    return count;
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(arr, n)<<endl;
    }
    return 0;
}  