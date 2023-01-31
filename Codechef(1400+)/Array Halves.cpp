#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
	    long long a;
	    cin>>a;
	    long long b[2*a];
	    for(long long i=0;i<2*a;i++){
	        cin>>b[i];
	    }
	    vector<long long> v1,v2;
	    for(long long i=0;i<2*a;i++){
	        if(b[i]>a && a>i){
	            v1.push_back(i+1);
	        }
	        else if(b[i]<=a && a<=i){
	            v2.push_back(i+1);
	        }
	    }
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());
	    long long ans=0;
	    for(long long i=0;i<v1.size();i++){
	        ans+=abs(v1[i]-v2[i]);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
