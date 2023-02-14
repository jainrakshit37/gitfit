#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<pair<int,int>> v;
        for(int i=0;i<a;i++){
            int p,q;
            cin>>p>>q;
            v.push_back(make_pair(p,q));
        }
        int k1,k2;
        cin>>k1>>k2;
        bool flag=0;
        for(auto i:v){
            if(i.first==k1 || i.second==k2){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<'\n';
        }
    }
	return 0;
}
