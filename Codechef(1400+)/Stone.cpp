#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a,k;
    cin>>a>>k;
    vector<int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int mx=*max_element(b.begin(),b.end());
    int mi=*min_element(b.begin(),b.end());
    if(k%2==0 && k>0){
        for(int i=0;i<a;i++){
            b[i]=abs(b[i]-mi);
        }
    }
    if(k%2==1 && k>0){
        for(int i=0;i<a;i++){
            b[i]=mx-b[i];
        }
    }
    for(auto i:b){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
