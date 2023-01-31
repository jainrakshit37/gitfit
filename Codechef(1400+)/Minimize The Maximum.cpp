#include <bits/stdc++.h>
using namespace std;
#define int long long int
bool trap(vector<int> b,int o,int a){
    if(b[0]>o){
        return 0;
    }
    for(int i=1;i<a;i++){
        if(b[i-1]<o){
            b[i]=b[i]-(o-b[i-1]);
            b[i-1]=o;
        }
        if(b[i]>o){
            return 0;
        }
    }
    if(*max_element(b.begin(),b.end())>o){
        return 0;
    }
    return true;
}
signed main(){
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    vector<int> b(a);
	    for(int i=0;i<a;i++){
	        cin>>b[i];
	    }
	    int m=0;
	    int n=*max_element(b.begin(),b.end());
	    int ans=INT_MAX;
	    while(m<=n){
	        int o=(m+n)/2;
	        if(trap(b,o,a)){
	            ans=min(ans,o);
	            n=o-1;
	        }
	        else
	        m=o+1;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
