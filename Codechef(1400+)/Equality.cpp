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
        int j=0;
        for(int i=0;i<a;i++){
            cin>>b[i];
            j+=b[i];
        }
        j=j/(a-1);
        for(auto  i:b){
            cout<<j-i<<" ";
        }
        cout<<endl;
    }
	return 0;
}
