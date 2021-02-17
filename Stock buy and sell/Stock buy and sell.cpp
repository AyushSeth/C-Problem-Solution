#include <bits/stdc++.h>
using namespace std;

int maxProfit(int a[], int n){
    int profit = 0;
    int earned;
    for(int i=1;i<n;i++) {
        if(a[i] > a[i-1]) {
            earned = a[i]-a[i-1];
            profit += earned ;
        }
    }
    return profit;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        int ans = maxProfit(A, n);
        cout<<ans<<endl;
    }
    return 0;
}