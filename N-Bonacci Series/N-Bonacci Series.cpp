#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >>n;
    cin >>m;
    int a[100];
    for(int i = 0; i < n-1;i++) {
        a[i] = 0;
    }
    a[n-1] = 1;
    int sum = 0, s = a[0];
    for( int i = 0 ; i < n; i++) {
        sum = sum + a[i];
    }
    sum = 0;
    for( int i = n ; i < m; i++) {
           sum += a[i-1] - a[i-n-1];
           a[i] = sum;
    }
    for( int i = 0 ; i < m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}