#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a[3],b[3],c[3];
        int ans=0;
        int x=0,y=0,z=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            x+=a[i];
        }
        for(int i=0;i<3;i++){
            cin>>b[i];
            y+=b[i];
        }
        for(int i=0;i<3;i++){
            cin>>c[i];
            z+=c[i];
        }
        for(int i=0;i<3;i++){
            ans=max(ans,a[i]+b[i]+c[i]);
        }
        ans=max(ans,max(x,max(y,z)));
        if(ans%2==1 || ans==0){
            cout<<ans<<endl;
        }
        else{
            cout<<ans-1<<endl;
        }
    }
	return 0;
}
