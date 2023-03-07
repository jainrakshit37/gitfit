#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(int a, vector<vector<int>> v){
    vector<vector<int>> dp(a,vector<int>(a));
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i>0 && j>0)
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])+v[i][j];
            else if(i>0)
            dp[i][j]=dp[i-1][j]+v[i][j];
            else if(j>0)
            dp[i][j]=dp[i][j-1]+v[i][j];
        }
    }
    //cout<<dp[a-1][a-1]<<"\n";
    if(dp[a-1][a-1]<0){
        cout<<"Bad Judges"<<"\n";
    }
    else{
        cout<<fixed<<setprecision(6)<<1.0*(dp[a-1][a-1])/((2*a)-3)<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<vector<int>> v(a,vector<int>(a));
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                cin>>v[i][j];
            }
        }
        solve(a,v);
    }
	return 0;
}
