#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,t,temp,l,r;
        cin>>a>>t>>temp>>l>>r;
        int ci,pi;
        int yhi=INT_MAX;
        int ans=INT_MIN;
        bool flag=0;
        while(a--){
            //cin>>ci>>pi;
            scanf("%d",&ci);
            scanf("%d",&pi);
            if(ci<=temp){
                ans=min(temp,ci+t);
            }
            else{
                ans=max(temp,ci-t);
            }
            if(ans>=l && ans<=r){
                yhi=min(yhi,pi);
                flag=1;
            }
            //cout<<ans<<" ";
        }
        if(flag){
            cout<<yhi<<endl;
        }
        else cout<<-1<<endl;
    }
	return 0;
}
