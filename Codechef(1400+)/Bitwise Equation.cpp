#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int spec=8589934592;
        if(a!=0){
            cout<<"1 2"<<" "<<spec<<" "<<spec+a<<endl;
        }
        else cout<<"3 5 6 7"<<endl;
    }
	return 0;
}
