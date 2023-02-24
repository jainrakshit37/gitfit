#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,k;
        cin>>a>>k;
        vector<int>v(a);
        int ans=0;
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        int km=*max_element(v.begin(),v.end());
        for(int i=0;i<a;i++){
            if(v[i]==km){
                if(i>=k-1){
                    ans+=a-i;
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
