#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> b(a);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        int mx=*max_element(b.begin(),b.end());
        int freq=count(b.begin(),b.end(),mx);
        int mod=1000000007;
        int ans=1;
        while(freq--){
            ans*=2;
            ans%=mod;
        }
        cout<<ans-1<<endl;
    }
	return 0;
}
