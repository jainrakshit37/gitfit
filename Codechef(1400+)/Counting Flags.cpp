#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int m,n,o;
        m=2*x*(x-1)*(x-1);
        n=x*(x-1)*(x-2);
        o=2*x*(x-1)*(x-2)*(x-2);
        cout<<m+n+o<<endl;
    }
	return 0;
}
