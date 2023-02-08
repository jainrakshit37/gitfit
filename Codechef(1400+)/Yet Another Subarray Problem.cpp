#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        for(int i=1;i<=a;i++){
            cout<<2*i-1<<" ";
        }
        cout<<endl;
    }
	return 0;
}
