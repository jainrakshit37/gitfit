#include <bits/stdc++.h>
using namespace std;
#define int long long
#define zoo 998244353
int product(int f, int l){
    return ((f%zoo)*(l%zoo))%zoo;
}
int zoom(int a,int b){
    if (b==0)
        return 1;
    int var=zoom(a,b/2);
    var=product(var,var);
    if(b%2)
        return product(var,a);
    return var;
}
int inv(int a,int z=zoo){
    return zoom(a,z-2);
}
signed main(){
    int n,z;
    cin>>n>>z;
    vector<int>v1(n+1,0);
    vector<int>v2(n+2,0);
    v1[1]=v2[1]=inv(2);
    int inv2=inv(2);
    for(int i=2;i<=n;i++){
        int lp = zoom(z,i-1);
        lp=inv(lp);
        int ans=v1[i-1]+product(zoom(lp,2),inv2)+product(lp,v2[i-1]);
        ans%=zoo;
        v1[i]=ans;
        v2[i]=(v2[i-1]+product(lp,inv2))%zoo;
    }
    for(auto z:v1){
        if(z>=1)
        cout<<z<<" ";
    }
    cout<<endl;
}



