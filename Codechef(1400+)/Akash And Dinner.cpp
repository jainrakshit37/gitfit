#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,k;
        cin>>a>>k;
        int h,zucu=0,tot=0;
        vector<pair<int,int>> c;
        int b[a];
        vector<bool> ans(100001,1);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        for(int i=0;i<a;i++){
            cin>>h;
            c.push_back(make_pair(h,b[i]));
        }
        sort(c.begin(),c.end());
        for(int i=0;(i<a&&zucu<k);i++){
            //cout<<c[i].first<<" "<<c[i].second<<" "<<ans[c[i].second]<<endl;
            if(ans[c[i].second]){
                tot+=c[i].first;
                ans[c[i].second]=false;
                zucu++;
            }
            else{
                continue;
            }
        }
        if(zucu>=k){
            cout<<tot<<endl;
        }
        else{
            cout<<-1<<endl;
        }       
    }
	return 0;
}
