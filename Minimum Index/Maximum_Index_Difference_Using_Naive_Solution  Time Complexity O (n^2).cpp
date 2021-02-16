// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int maxIndexDiff(int a[], int n) 
{ 
    int maxVal=-1;
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>=i;j--) {
            if(a[j] >= a[i]) {
                maxVal = max(maxVal,(j-i));
            }
        }
    }
    return maxVal;
}



// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        
        //calling maxIndexDiff() function
        cout<<maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends