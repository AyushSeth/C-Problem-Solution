// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    
    public:
    //Function to count the number of possible triangles.
    
    bool trianglePossible(int a,int b,int c) {
        if( ( a+b ) > c ) {
            if( ( b+c ) > a ) {
                if( ( a+c ) > b ) {
                    return true;
                }
            }
        }
        return false;
    }
    
    int findNumberOfTriangles(int a[], int n) {
        int count = 0;
        for(int i=0;i<n-2;i++) {
            for(int j=i+1;j<n-1;j++) {
                int sum = a[i]+a[j];
                for(int k=j+1;k<n;k++) {
                    if(trianglePossible(a[i],a[j],a[k])) {
                        count++;
                    }
                }
            }
        }
        return count;
    } 
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}