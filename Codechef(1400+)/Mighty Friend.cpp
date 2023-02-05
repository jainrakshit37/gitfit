#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int k;
        cin>>k;
        int tt=0,mt=0;
        int b[a];
        vector<int> ta;
        vector<int> ma;
        for(int i=0;i<a;i++){
            cin>>b[i];
            if(i%2==1){
                tt+=b[i];
                ta.push_back(b[i]);
            }
            else{
                mt+=b[i];
                ma.push_back(b[i]);
            }
        }
        sort(ta.begin(),ta.end());
        sort(ma.begin(),ma.end(),greater<int>());
        int l=0;
        //cout<<tt<<" "<<mt<<endl;
        while(k>0 && tt<=mt && l<a/2){
            tt=(tt-ta[l])+ma[l];
            mt=(mt-ma[l])+ta[l];
            l++;
            k--;
            //cout<<tt<<" "<<mt<<endl;
        }
        if(tt>mt){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

