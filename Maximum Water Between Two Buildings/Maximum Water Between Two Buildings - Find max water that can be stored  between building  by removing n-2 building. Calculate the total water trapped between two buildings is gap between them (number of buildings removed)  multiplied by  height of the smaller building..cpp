#include<bits/stdc++.h> 
using namespace std; 
 
int maxWater(int a[], int n) 
{ 
    if( n <= 2) {
        return 0;
    }
    if( n == 3) {
        return min(a[0],a[n-1]);
    }
    int ptrOne = 0,ptrTwo = n-1 ,sum = 0;
    for(int i=0;i<n;i++) {
        int val = min(a[ptrOne] , a[ptrTwo]);
        sum = max(sum , val*(n-2));
        if(a[ptrOne] <= a[ptrTwo]) {
            ptrOne++;
            n--;
        }
        else {
            ptrTwo--;
            n--;
        }
    }
    return sum;
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        
        cout<<(maxWater(height, n))<<endl;
    }

	 
} 

  
