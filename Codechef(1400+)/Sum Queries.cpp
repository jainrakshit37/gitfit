#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,q;
    cin>>n>>q;
    while(q--){
        int a;
        cin>>a;
        int ans=0;
        if(a>n+1 && a<=3*n){
            int ans=min(abs((n+2)-a),abs(3*n-a));
            cout<<ans+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}
