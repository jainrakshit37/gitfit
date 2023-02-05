#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> b(a);
        vector<int> c(a);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(int i=0;i<a;i++){
            cin>>c[i];
        }
        int ans=INT_MIN;
        sort(c.begin(),c.end(),greater<int>());
        for(int i=0;i<a;i++){
            ans=max(ans,b[i]+c[i]);
        }
        cout<<ans<<endl;
    }
    
	return 0;
}
