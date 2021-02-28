
#include<bits/stdc++.h>
using namespace std;

int twoRepeated(int a[],int n) {

	for(int i=0;i<n;i++) {
		if(a[abs(a[i])-1] > 0) {
			a[abs(a[i])-1] *= -1;
		}
		else {
			cout << a[i] << " ";
		}
	}
	cout << endl;

}

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
        
        twoRepeated(a, n);
    }
    return 0;
}