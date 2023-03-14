#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<bool> v(10001,true);
//to store all prime numbers,
vector<int> prime;
void seive(){
    v[0]=false;
    v[1]=false;
    for(int i=2;i<=10000;i++){
        if(v[i]){
            prime.push_back(i);
            for(int j=i*i;j<=10000;j+=i){
                v[j]=false; 
            }
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    seive();
    while(n--){
        int a;
        cin>>a;
        int ans=0;
        int p=0;
        while((a-2*prime[p])>0){
            if(v[a-2*prime[p]]){
                ans++;
            }
            p++;
        }
        cout<<ans<<endl;
    }
	return 0;
}
