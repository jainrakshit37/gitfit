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
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int tot=0;
        int lo=0;
        for(int i=0;i<a;i++){
            tot+=v[i];
            if(tot<a) lo++;
            else break;
        }
        cout<<lo<<endl;
    }
	return 0;
}
