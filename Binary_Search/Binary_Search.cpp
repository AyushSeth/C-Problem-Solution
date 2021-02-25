#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:

    int searchInSorted(int arr[], int N, int X) 
    { 
    
        int l = 0, h = N-1,mid;
        while(l<=h) {
            mid = (l+h)/2;
            if(arr[mid] < X) {
                l = mid +1;
            }
            else if(arr[mid] > X) {
                h = mid - 1;
            }
            else {
                return 1;
            }
        }
        return -1;
       
    }
};

int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 