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
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        int ans=0,j=1;
        for(int i=1;i<a;i++){
            if(b[i]>=b[i-1]){
                ans+=j;
                j++;
            }
            else{
                j=1;
            }
        }
        cout<<ans+a<<endl;
    }
    return 0;
}
