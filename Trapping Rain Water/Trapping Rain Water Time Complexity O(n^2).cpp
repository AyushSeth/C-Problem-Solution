#include<bits/stdc++.h>

using namespace std;

int trappingWater(int a[], int n){
    int ans = 0;
    for(int i=1;i<n-1;i++) {
        int left = a[i];
        for(int j=0;j<i;j++) {
            left = max(a[j],left);
        }
        int right = a[i];
        for(int j=i+1;j<n;j++) {
            right = max(a[j],right);
        }
        ans = ans + min(left,right) - a[i];
    }
    return ans;
}

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  
