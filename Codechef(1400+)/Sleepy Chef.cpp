#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,k;
        cin>>a>>k;
        int t=0,ans=0;
        string b;
        cin>>b;
        for(int i=0;i<a;i++){
            if(b[i]=='0'){
                t++;
            }
            else{
                //cout<<ans<<"\n";
                ans+=(t/k);
                t=0;
                
            }
        }
        if(t>0){
            ans+=(t/k);
        }
        cout<<ans<<endl;
    }
	return 0;
}
