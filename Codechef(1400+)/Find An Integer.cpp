#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
	    long long a,b,ans;
	    cin>>a>>b;
	    ans=a*b-a-b;
        if(ans==-1) ans=max(a,b)-1;
        if(ans==0)ans=2;
        cout<<ans<<endl;
	}
	return 0;
}
