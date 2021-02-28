
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    pair<int,int> twoRepeated (int arr[], int N)
    {
       N = N+2;
       pair <int,int> ans ;
       int b[N];
       int flag = 0, num,sec;
       for(int i=0;i<N;i++){ 
            b[i] = arr[i];
       }
       sort(arr,arr+N);
       for(int i=0;i<N;i++){
           if(flag == 0) {
               if(arr[i] == arr[i+1]) {
                   flag = 1;
                   num = arr[i];
                   continue;
               }
           }
           if(flag == 1) {
               if(arr[i] == arr[i+1]) {
                   flag = 1;
                   sec = arr[i];
                   break;
               }
           }
       }
       int cntOne = 2, cntTwo = 2;
       for(int i=0;i<N;i++){ 
            if(b[i] == num) {
              cntOne--;  
              if(cntOne == 0) {
                   ans.first = num;
                   ans.second = sec; 
              }
              if(cntOne == 0) {
                  break;
              }
              continue;
            }
            else if(b[i] == sec){
              cntTwo--;  
              if(cntTwo == 0) {
                   ans.first = sec;
                   ans.second = num;
              }
              if(cntTwo == 0) {
                  break;
              }
              continue;
            }
       }
       return ans;
    }
};

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        pair<int , int>res;
        res = obj.twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}