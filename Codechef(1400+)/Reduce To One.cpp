#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
signed main(){
    int n;
    cin>>n;
    vector<int> v(1000002,1);{
        for(int i=1;i<v.size();i++){
            v[i]=(v[i]*i*(v[i-1]%mod));
            v[i]%=mod;
        }
    }
    while(n--){
        int a;
        cin>>a;
        cout<<v[a+1]-1<<endl;
    }
	return 0;
}
