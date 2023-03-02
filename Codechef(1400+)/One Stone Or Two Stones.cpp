#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int c=max(a,b);
        int d=min(a,b);
        if(abs(a-b)>=2){
            if(a==c) cout<<"CHEF"<<endl;
            else cout<<"CHEFINA"<<endl;
        }
        if(a==b){
            if(a%2==0) cout<<"CHEFINA"<<endl;
            else cout<<"CHEF"<<endl;
        }
        if(abs(a-b)==1){
            if(d%2==0) cout<<"CHEFINA"<<endl;
            else cout<<"CHEF"<<endl;
        }
    }
	return 0;
}
