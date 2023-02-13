#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> ans(a+1,0);
        vector<int> v(a);
        for(int i=0;i<v.size();i++){
            cin>>v[i];
            ans[v[i]]++;
        }
        sort(ans.begin(),ans.end(),greater<int>());
        cout<<max((ans[0]+1)/2,ans[1])<<'\n';
    }
	return 0;
}
