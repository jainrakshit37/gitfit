#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        map<int,int> ans;
        int inp;
        int book=INT_MIN;
        for(int i=0;i<a;i++){
            cin>>inp;
            ans[inp]++;
        }
        if(a==1 || a==2){
            cout<<0<<endl;
            continue;
        }
        for(auto i:ans){
            book=max(book,i.second);
        }
        if(book==1){
            cout<<a-2<<endl;
            continue;
        }
        else{
            cout<<a-book<<endl;
        }
    }
	return 0;
}
