#include <bits/stdc++.h>
using namespace std;
#define int long long
int zolo(int n,int k){
    int ans=(n-1)*k;
    ans+=k*(n-(2*k));
    return ans;
}
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            cout<<a-1<<endl;
            continue;
        }
        if(b>=a/2){
            b=a/2;
        }
        cout<<zolo(a,b)<<endl;
    }
	return 0;
}
