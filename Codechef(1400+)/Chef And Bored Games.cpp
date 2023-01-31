#include <bits/stdc++.h>
using namespace std;
int count(int a,int z){
    int p=(a-z+1)*(a-z+1);
    return p;
}
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int z=1;
        int ans=0;
        while(z<=a){
            ans+=count(a,z);
            z+=2;
        }
        cout<<ans<<endl;
    }
    
	return 0;
}
