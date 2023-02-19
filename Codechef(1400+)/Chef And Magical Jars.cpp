#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> v(a);
        int mx=0;
        for(int i=0;i<v.size();i++){
            cin>>v[i];
            mx+=v[i];
        }
        cout<<mx+1-a<<endl;
    }
	return 0;
}
