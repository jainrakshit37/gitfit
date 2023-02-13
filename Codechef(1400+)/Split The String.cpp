#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int n1=0,n0=0;
        for(auto i:s){
            if(i=='1'){
               n1++; 
            }
            if(i=='0'){
                n0++;
            }
        }
        //cout<<n1<<n0;
        int j=abs(n1-n0);
        if(j==0){
            cout<<0<<endl;
        }
        else if(j<b){
            cout<<1<<endl;
        }
        else{
            if(j%b==0){
                cout<<j/b<<endl;
            }
            else{
                cout<<j/b+1<<endl;
            }
        }
    }
	return 0;
}
