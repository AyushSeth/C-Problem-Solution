
// Test Case
// N = 6
// height[] = {2,1,3,4,6,5}
// Output: 8 i.e deleting builddings from index 1 to 4. Remaining buildins are 2 & 5. Minimum is 2. Distance between two building is 4.
// 2 * (4) = 8

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

  
