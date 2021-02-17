// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int a[], int n){
    int sum =0;
    int lMax[n];
    lMax[0]=a[0];
    for(int i=1;i<n;i++) {
        lMax[i]=max(a[i],lMax[i-1]);
    }
    int rMax[n];
    rMax[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--) {
        rMax[i]=max(a[i],rMax[i+1]);
    }
    for(int i=1;i<n-1;i++) {
        sum +=  min(rMax[i],lMax[i]) - a[i];    
    }
    return sum;
}

// { Driver Code Starts.

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
}  // } Driver Code Ends
