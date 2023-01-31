#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> b(a);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        int t=1;
        for(int i=0;i<a-1;i++){
            if(signbit(b[i])!=signbit(b[i+1])){
                t++;
                continue;
            }
            while(t){
                cout<<t<<" ";
                t--;
            }
            t=1;
        }
        if(t!=1){
            while(t){
                cout<<t<<" ";
                t--;
            }
        }
        else cout<<1;
        cout<<endl;
    }
    
    
    
    
    
    
    
    
    
	return 0;
}
