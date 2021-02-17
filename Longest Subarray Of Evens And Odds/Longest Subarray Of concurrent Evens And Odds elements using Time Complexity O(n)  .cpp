#include<iostream> 
using namespace std; 

int maxEvenOdd(int a[], int n) 
{ 
    // bool isCond = true;
   int temp = 1 , k = 0 , maxVal = -1;
   int val = a[0];
   for(int i = 1 ; i < n ; i++) {
       int flag = 1;
       if( a[i] %2 == 0 ) {
            if( a[i-1]%2 !=0)  {
                flag = 0;
                temp++;
            }
            if(flag == 1) {maxVal = max(temp,maxVal);temp = 1;}
       }
       else {
           if( a[i]%2 != 0 ) {
                if( a[i-1]%2 ==0)  {
                    flag = 0;
                    temp++;
                }
                if(flag == 1) {maxVal = max(temp,maxVal);temp = 1;}
            }
       }
   }
    maxVal = max(temp,maxVal);
   return maxVal;
} 

int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        
        //calling function
        cout  << maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
