#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int le=0,ans=0;
        for(auto i:s){
            //cout<<i<<" ";
            if(i==s[0] || i==s[s.length()-1]){
                le=0;
            }
            else{
                le++;
            }
            ans=max(ans,le);
        }
        if(ans==0) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
	return 0;
}
