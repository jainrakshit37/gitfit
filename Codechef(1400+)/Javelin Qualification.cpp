#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<pair<int,int>> v;
        for(int i=0;i<a;i++){
            int l;
            cin>>l;
            v.push_back(make_pair(l,i+1));
        }
        sort(v.begin(),v.end());
        int count=0;
        vector<int>ans;
        for(int i=a-1 ; i>=0 ; i--){
            if(v[i].first>=b){
                count++;
                ans.push_back(v[i].second);
            }
            else if(count<c){
                ans.push_back(v[i].second);
                count++;
            }
            else{
                break;
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<" ";
        for(auto j: ans){
            cout<<j<<" ";
        }
        cout<<endl;
    }
	return 0;
}
