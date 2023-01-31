#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int b[a];
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        ll ans=0;
        sort(b,b+a,greater<int>());
        for(int i=0;i<a;i+=2){
            ans+=b[i];
        }
        cout<<ans<<endl;
    }
	return 0;
}
