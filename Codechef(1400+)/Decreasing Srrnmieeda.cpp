#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        if(2*l>r){
            cout<<r<<endl;    
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
