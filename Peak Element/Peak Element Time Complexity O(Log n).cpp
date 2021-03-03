#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int searchPeakElementInArray(int a[], int n) {
    int low=0 , high=n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if( (mid == 0 || a[mid] >= a[mid-1]) && (mid == n-1 || a[mid] >= a[mid+1]) ) {
            return mid;
        }
        else if( mid == 0 || (a[mid-1] >= a[mid]) ) {
            high = mid - 1;
        }
        else {
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ans = searchPeakElementInArray(a,n);
    cout << ans;
    cout << endl;
    return 0;
}
