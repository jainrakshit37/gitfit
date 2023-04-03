#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int seas;
        cin>>seas;
        vector<int> it(seas);
        for(int i=0;i<seas;i++){
            cin>>it[i];
        }
        int ans=0;
        int seastime=0;
        for(int i=0;i<seas;i++){
            int ep;
            cin>>ep;
            for(int j=0;j<ep;j++){
                int tim;
                cin>>tim;
                seastime+=tim;
            }
            if(ep>1){
                seastime-=(it[i]*(ep-1));
            }
            ans+=seastime;
            seastime=0;
        }
        cout<<ans<<endl;
    }
	return 0;
}
