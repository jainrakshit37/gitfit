#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    vector<bool> prime(2000001,0);  
    for(int i=2;i<2000001;i++){
        if(prime[i]==0){
            for(int j=i*2;j<2000001;j+=i){
                prime[j]=true;
            }
        }
    }
    int m,n;
    cin>>m>>n;
    int ans=0;
    for(int i=2;i<=m+n;i++){
        if(!prime[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
	return 0;
}
