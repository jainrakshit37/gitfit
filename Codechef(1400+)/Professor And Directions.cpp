#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        bool flag=0;
        for(int i=0;i<a-1;i++){
            if((s[i]=='L' && s[i+1]=='L') || (s[i]=='R' && s[i+1]=='R')){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
	return 0;
}
