#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        string s; 
        cin>>s;
        int o=0,z=0;
        for(int i=1;i<s.length();i++){
            if(s[i-1]=='1' && s[i]=='0'){
                o++;
            }
            if(s[i-1]=='0' && s[i]=='1'){
                z++;
            }
        }
        if(z==o) cout<<s.length()-2;
        else cout<<2;
        cout<<"\n";
    }
	return 0;
}
