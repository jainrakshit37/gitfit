#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]==a[1] && a[1]==a[2]){
            cout<<0<<endl;
            continue;
        }
        int m=a[2]-a[0];
        int n=a[2]-a[1];
        if(m%2==0 && n%2==0){
            cout<<(m-1)-((n-2)/2)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
