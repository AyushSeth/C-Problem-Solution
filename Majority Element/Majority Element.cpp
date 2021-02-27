
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int majorityElement(int a[], int n)
    {
        int res = 0, count =1;
        for(int i = 1;i<n;i++) {
            if(a[res] == a[i]) {
                count++;
            }
            else {
                count--;
            }
            if(count == 0) {
                res = i;
                count = 1;
            }
        }
        count = 0;
        for(int i=0;i<n;i++) {
            if(a[res] == a[i]) {
                count++;
            }
            if(count > n/2){
                return a[res];
            }
        }
        return -1;
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
