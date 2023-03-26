#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string ans="";
        int i=0;
        while(a--){
            string inp;
            cin>>inp;
            if(inp[i]=='0') ans+='1';
            else ans+='0';
            i++;
        }
        cout<<ans<<endl;
    }
	return 0;
}
