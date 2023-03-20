#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        bool flag=false;
        int sum=0;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
            if(v[i]==2){
                flag=true;
            }
            sum+=v[i];
        }
        if(sum%2==0){
            cout<<0<<endl;
        }
        else if(sum%2==1 && flag==true){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
