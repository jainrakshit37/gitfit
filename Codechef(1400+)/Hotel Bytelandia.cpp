#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int b[a];
        int g[a];
        vector<int> v(1001,0);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        for(int i=0;i<a;i++){
            cin>>g[i];
        }
        for(int i=0;i<a;i++){
            for(int j=b[i];j<g[i];j++){
                v[j]++;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[0]<<'\n';
    }
	return 0;
}
