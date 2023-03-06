#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    ll ans[32]={1};
    for(int i=1;i<32;i++){
        ans[i]=ans[i-1]*2;
    }
    cout<<ans[31]<<endl;
    while(n--){
        ll a,b;
        cin>>a>>b;
        ll tot=0;
        vector<ll> v(a);
        for(ll i=0;i<a;i++){
            cin>>v[i];
            if(v[i]%b==0){
                tot+=1;
            }
        }
        cout<<ans[tot]-1<<"\n";
    }
	return 0;
}
