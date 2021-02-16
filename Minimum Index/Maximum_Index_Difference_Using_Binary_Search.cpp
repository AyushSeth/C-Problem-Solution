#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<long long int> a,int l,int h,int val) {
    int index=-1;
    while(l <= h) {

        int mid = (l+h)/2;
        
        if(val > a[mid] ) {
            h = mid-1;
        }
        else if(val < a[mid]) {
            index = max(mid,index);
            l=mid+1;
        }
        else if(val == a[mid]){
            return mid;
        }
    }
    return index;
}

int maxIndexDiff(int a[], int n) 
{ 
    
  int val=0,ans,max_val,max_ans=-1;
  vector <long long int> maxFromEnd(n+1,INT_MIN);
  for(int i = n-1 ; i >= 0 ; i-- ) {
      int x = maxFromEnd[i+1] , y;
      y = a[i];
      maxFromEnd[i] = max(x,y);
  }
  for(int i=0;i<n;i++) {
      int l = i, h = n-1;
      int mid = (l+h)/2 , x = a[i];
      ans = binarySearch(maxFromEnd,l,h,x);
      max_val = ans - i;
      max_val = max(max_ans,max_val);
      max_ans = max_val;
      
  }
  return max_ans;
}


int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        
        //calling maxIndexDiff() function
        cout<<maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   