#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int N,K;
        cin>>N>>K;
        int b[K];
        int c=0;
        for(int i=0;i<K;i++){
            cin>>b[i];
        }
        while(N--){
            string s;
            cin>>s;
            c=0;
            for(int i=0;i<K;i++){
                int p=s[i]-48;
                c+=(p*b[i]);
                //cout<<c<<endl;
            }
            cout<<c<<endl;
        }
    }
	return 0;
}
