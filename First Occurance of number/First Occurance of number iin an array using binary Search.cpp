#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearchForFirstOccurance(int a[],int n,int x) {
    int low = 0, high = n-1,mid,ans = -1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] > x) {
            high = mid - 1;
        }
        else if(a[mid] < x) {
            low = mid + 1;
        }
        else {
            if(a[mid] == x && a[mid] != a[mid-1])
            {
                return mid;
            }
            else {
                high = mid - 1;
                ans = mid;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int ans = binarySearchForFirstOccurance(a,n,x);
    cout << ans;
    cout << endl;
    return 0;
}
