#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a,m,n;
        cin>>a>>m>>n;
        vector<int> v(a);
        int mc=0,nc=0,both=0;
        for(int i=0;i<v.size();i++){
            cin>>v[i];
            if(v[i]%m==0) mc++;
            if(v[i]%n==0) nc++;
            if(v[i]%n==0 && v[i]%m==0) both++;
        }
        if(mc==0 && nc==0 && both==0) cout<<"ALICE"<<endl;
        else if(mc==0 && nc==0 && both!=0) cout<<"BOB"<<endl;
        else if(both){
            if(nc>mc) cout<<"ALICE"<<endl;
            else cout<<"BOB"<<endl;
        }
        else{
            if(mc>nc) cout<<"BOB"<<endl;
            else cout<<"ALICE"<<endl;
        }
    }
	return 0;
}
