#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        int loc;
        cin>>a>>b>>c>>d;
        if((a+1)%b==(c+1)%d){
            cout<<1<<endl;
        }
        else{
            loc=a-(a%b);
            //cout<<loc;
            loc+=((b*d)/gcd(b,d));
            cout<<loc-a<<"\n";
        }
    }
	return 0;
}
