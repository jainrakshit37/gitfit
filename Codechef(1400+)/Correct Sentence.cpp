#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<string> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        bool ans=0;
        for(auto i:v){
            int t=0,z=0;
            //cout<<i<<' '<<endl;
            for(auto j:i){
                if(j>='a' && j<='m'){
                    t++;
                }
                else if(j>='N' && j<='Z'){
                    z++;
                }
                else{
                    ans=1;
                    break;
                }
            }
            if(ans) break;
            if(t!=i.length() && z!=i.length()){
                ans=1;
                break;
            }
        }
        if(ans){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
}
