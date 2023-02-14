#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,mw,rw;
        cin>>a>>mw>>rw;
        vector<int> v(a);
        vector<int> w(100001,0);
        int ans=rw;
        for(int i=0;i<a;i++){
            cin>>v[i];
            w[v[i]]++;
            if(w[v[i]]==2){
                ans+=(2*v[i]);
                w[v[i]]=0;
            }
        }
        if(ans>=mw) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
