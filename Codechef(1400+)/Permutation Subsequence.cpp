#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        map<int,int> mp;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int ans=0;
        int multi=1;
        for(int i=1;i<=a;i++){
            int py=(multi*mp[i])%mod;
            ans+=py;
            ans%=mod;
            multi=py;
            if(py==0) break;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
