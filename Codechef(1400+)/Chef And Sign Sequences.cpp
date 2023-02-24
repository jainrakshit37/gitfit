#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int com=0,moc=0;
        int ans=0;
        for(auto i:s){
            if(i=='<'){
                com++;
                moc=0;
            }
            if(i=='>'){
                moc++;
                com=0;
            }
            ans=max(ans,max(moc,com));
        }
        cout<<ans+1<<endl;
    }
	return 0;
}
