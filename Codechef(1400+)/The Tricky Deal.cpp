#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int pro=0,zee=0,t=0;
        int d2=0;
        bool flag=0;
        while(zee>=0){
            pro+=(a-pow(2,t));
            if(pro<=zee && flag==0){
                d2=t;
                flag=1;
            }
            t+=1;
            zee=pro;
        }
        cout<<t-1<<" "<<d2<<endl;
    }
	return 0;
}
