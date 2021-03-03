#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findRepetitions(int a[], int n) {
    
    int slow = a[0] , fast = a[0];
    do{
        slow = a[slow];
        fast = a[a[fast]];
    }while(slow != fast);
    slow = a[0];
    while(slow != fast) {
        slow = a[slow];
        fast = a[fast];
    }
    return slow;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ans = findRepetitions(a,n);
    cout << ans;
    cout << endl;
    return 0;
}
