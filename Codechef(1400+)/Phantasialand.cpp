#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a;
    scanf("%lld",&a);
    int tot=0;
    vector<int> v(a);
    for(int i=0;i<a;i++){
        scanf("%lld",&v[i]);
        tot+=v[i];
    }
    cout<<max(a,(tot+1)/2)<<endl;
	return 0;
}
