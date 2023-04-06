#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> v(a);
        int count=0;
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        if(a==2){
            cout<<"NO\n";
            continue;
        }
        sort(v.begin(),v.end(),greater<int>());
        int mx=v[0];
        int nx=v[1];
        if(mx==nx){
            for(int i=0;i<a;i++){
                if(v[i]==mx){
                    count++;
                }
                else break;
            }
            if(count<=(a+1)/2){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            if(v[a-1]==nx){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
	return 0;
}
