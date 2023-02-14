#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a%2==1)  cout<<b<<" ";
        for(int i=1;i<=a/2;i++){
            cout<<b+i<<" "<<b-i<<" ";
        }
        cout<<"\n";
    }
	return 0;
}
