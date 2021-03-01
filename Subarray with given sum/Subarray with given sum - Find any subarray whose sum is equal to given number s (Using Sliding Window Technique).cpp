#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    vector<int> subarraySum(int a[], int n, int s){
        
        if(n == 1) {
            vector <int> b;
            if(a[0] == s) {
                b.push_back(1);
                b.push_back(1);
                return b;
            }
            else {
                b.push_back(-1);
                return b;
            }
        }
        
        int curr = a[0],f_Index = 0,l_Index = 0;
        for(int i=1;i<n;i++) {
            curr += a[i];
            if(curr > s) {
                while(curr > s) {
                    curr -= a[f_Index];
                    f_Index++;
                }
                if(curr == s) {
                    l_Index = i+1;
                }
            }
            if(curr == s) {
                f_Index++;
                l_Index = i+1;
                break;
            }
        }
        if(l_Index == 0) {
            vector <int> b;
            b.push_back(-1);
            return b;
        }
        else {
            vector <int> b;
            b.push_back(f_Index);
            b.push_back(l_Index);
            return b;
        }
        
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
} 