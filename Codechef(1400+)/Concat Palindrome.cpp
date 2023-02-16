#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        string first;
        cin>>first;
        string second;
        cin>>second;
        vector<int> v(26,0);
        vector<int> w(26,0);
        int flag=2;
        if(b>a){
            swap(first,second);
        }
        for(auto i:second){
            v[i-'a']++;
        }
        for(auto i:first){
            w[i-'a']++;
        }
        // for(int i=0;i<26;i++){
        //     cout<<v[i]<<" "<<w[i]<<endl;
        // }
        for(int i=0;i<26;i++){
            if(v[i]>w[i]){
                flag=0;
                break;
            }
            else{
                if((w[i]-v[i])%2==1){
                    flag-=1;
                }
                if(flag==0){
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
}