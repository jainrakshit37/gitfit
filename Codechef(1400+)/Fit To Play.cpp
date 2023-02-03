#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int ans=0;
        int curmi=INT_MAX;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
            curmi=min(curmi,v[i]);
            ans=max(ans,v[i]-curmi);
        }
        if(ans==0){
            cout<<"UNFIT"<<"\n";
        }
        else{
            cout<<ans<<endl;
        }
    }
	return 0;
}
