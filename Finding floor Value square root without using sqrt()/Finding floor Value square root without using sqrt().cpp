#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int squareRoot(int x) {
    int low = 0, high = x,mid,ans = -1;
    while(low <= high) {
        mid = (low + high) / 2;
        int mMid = mid*mid;
        if(mMid < x) {
            low = mid + 1;
            ans = mid;
        }
        else if(mMid > x) {
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

int main()
{
    int x;
    cin >> x;
    int ans = squareRoot(x);
    cout << ans;
    cout << endl;
    return 0;
}
