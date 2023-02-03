#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c%a==0 && d%b==0){
            if((c/a == d/b) || (abs((c/a) - (d/b)) == 1))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            }
        else cout<<"NO"<<endl;
    }
	return 0;
}
