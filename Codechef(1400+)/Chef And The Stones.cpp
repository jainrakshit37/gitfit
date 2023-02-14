#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a1,a2,m;
        cin>>a1>>a2>>m;
        int f=min(a1,a2);
        int j=m*(m+1)/2;
        if(f>j){
            cout<<(a1-j)+(a2-j)<<endl;
        }
        else{
            cout<<abs(a1-a2)<<endl;
        }
    }
	return 0;
}
