#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int c[a];
        int ans=0;
        for(int i=0;i<a;i++){
            cin>>c[i];
            if(c[i]%2==0){
                ans++;
            }
        }
        if(ans>=b && (b!=0 || ans!=a)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
	return 0;
}
