#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxStep(int a[], int n){
            int maxSteps = 0 , res = 0,count = 0;
            int curr = a[0];
            for(int i=1;i<n;i++) {
                if(curr < a[i]) {
                    count++;
                    curr = a[i];
                    res = max(count , res);
                    continue;
                }
                count = 0;
                curr = a[i];
            }
        return res;
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}  