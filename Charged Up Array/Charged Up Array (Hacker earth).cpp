#include<bits/stdc++.h>
using namespace std;

int solve (vector<long long> A) {
    long long MOD = 1000000007;
    long long n = A.size();
    // long long subsetEcahElement = pow(2,n-1);
//    int subsetsPresent = pow(2,n);
    long long int sum = 0;
   for(int i=0;i<n;i++) {
       if(A[i] >= pow(2,n-1) ) {
            sum = (sum%MOD + (A[i]%MOD)) % MOD;
       }
   }
   return sum;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        int out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}