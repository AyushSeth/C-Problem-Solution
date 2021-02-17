// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        
        int t=0;
        int k=0;
        vector<vector<int> > ans;
        
        vector <int> temp;
        for(int i=0;i<n;i++) {
            if(A[i+1] <= A[i]) {
                continue;
            } 
            // cout<< i <<" now new first pair value is i  \n";
            k = i;
            temp.push_back(k);
            for(int j=i+1;j<n;j++) {
                if(j+1 < n && A[j] <= A[j+1]) {
                    continue;
                }
                k=j;
                // cout<< k <<" now new second pair value is i  \n";
                temp.push_back(k);
                ans.push_back(temp);
                i=j;
                break;
            }
            temp.erase(temp.begin(),temp.end());
        }
  
        return ans;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends