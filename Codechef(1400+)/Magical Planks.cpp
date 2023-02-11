#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        string s;
        cin>>a>>s;
        int t=0;
        for(int i=1;i<a;i++){
            if(s[i]!=s[i-1]){
                t++;
            }
        }
        if(t%2==1)
        cout<<(t+1)/2<<endl;
        else
        cout<<t/2<<endl;
    }    
	return 0;
}
