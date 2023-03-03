#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        bool flag=0;
        for(int i=0;i<(1<<a);i++){
            int sum=0;
            for(int j=0;j<a;j++){
                if(i&(1<<j)){
                    sum+=v[j];
                }
            }
            if(sum==b){
                flag=1;
                break;
            }
        }
        if(flag) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
	return 0;
}
