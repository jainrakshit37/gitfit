#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(abs(b-a)%(2*c)==0){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
	return 0;
}
