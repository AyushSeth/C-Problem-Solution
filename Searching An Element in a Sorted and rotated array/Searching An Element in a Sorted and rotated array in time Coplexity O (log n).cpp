#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int searchInSortedRotatedArray(int a[], int n, int x) {
    int mid = (n)/2;
    int low=0 , high=n-1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == x) {
            return mid;
        }
        else if(a[low] < a[mid]) {
            if(x >= a[low] && a[mid] < x) {
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        else{
            if(x <= a[high] && a[mid] < x) {
                low = mid +1;
            }
            else {
                high = mid - 1;
            }
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
    int x;
    cin >> x;
    int ans = searchInSortedRotatedArray(a,n,x);
    cout << ans;
    cout << endl;
    return 0;
}
