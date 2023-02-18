#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    double n,x;
    cin>>n>>x;
    vector<double> v(n);
    double ans=0;
    double cursum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];
        if(ans<0){
            ans=0;
        }
        cursum=max(ans,cursum);
    }
    //cout<<cursum<<endl;
    double p=accumulate(v.begin(),v.end(),0);
    //cout<<p<<endl;
    p-=cursum;
    p+=(cursum/x);
    cout<<fixed<<setprecision(2)<<p<<endl;
	return 0;
}
