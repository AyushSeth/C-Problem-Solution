// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    
    public:
    //Function to count the number of possible triangles.
    
    int findNumberOfTriangles(int a[], int n)
    {
        int count = 0;
        sort(a,a+n);
        for(int i=0;i<n-2;i++) {
                int k = i+2;
            for(int j=i+1;j<n-1;j++) {
                while(k < n && (a[i] + a[j] > a[k])) {
                    k++;
                }
                if(k > j) {
                    count += k-j-1;
                }
            }
            // count += k-j11;
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