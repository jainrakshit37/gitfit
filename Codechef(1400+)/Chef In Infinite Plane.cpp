#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    //cin>>n;
    scanf("%lld",&n);
    while(n--){
        int a;
        cin>>a;
        vector<int>ans(100001,0);
        set<int> s;
        int l;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            //cin>>v[i];
            scanf("%lld",&l);
            v[i]=l;
            ans[v[i]]++;
            s.insert(v[i]);
        }
        int total=0;
        for(auto i:s){
            total+=min(ans[i],i-1);
        }
        //cout<<total<<endl;
        printf("%lld",total);
        printf("\n");
    }
	return 0;
}
