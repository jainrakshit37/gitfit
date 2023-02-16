#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,sess;
    cin>>n>>sess;
    vector<int> mp(1e6+1,0);
    int sum=0;
    for(int i=0;i<sess;i++){
        int tsk,tme;
        scanf("%lld",&tsk);
        scanf("%lld",&tme);
        //cin>>tsk>>tme;
        mp[tsk]+=tme;
        sum+=mp[tsk];
        printf("%lld",sum);
        printf("\n");
        //cout<<sum<<endl;
    }
	return 0;
}
