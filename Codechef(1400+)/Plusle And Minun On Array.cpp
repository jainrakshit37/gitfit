#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int b[a];
        int ans=0;
        int j;
        int x=INT_MIN,y=INT_MAX;
        for(int i=0;i<a;i++){
            cin>>j;
            b[i]=abs(j);
            //cout<<b[i]<<endl;
            if(i%2==0){
                ans+=b[i];
                y=min(y,b[i]);
            }
            else{
                ans+=-b[i];
                x=max(x,b[i]);
            }
        }
        if(y>x)
        cout<<ans<<endl;
        else
        cout<<ans-y-y+x+x<<endl;
    }
	return 0;
}
