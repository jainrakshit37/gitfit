#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,k,l;
        cin>>a>>k>>l;
        vector<int> v(a);
        int j=INT_MIN;
        for(int i=0;i<a;i++){
            cin>>v[i];
            if(i<(a-1)){
                j=max(j,v[i]);
            }
        }
        //cout<<j<<endl;
        //cout<<v[a-1]<<endl;
        if(k>0){
            v[a-1]+=(k*(l-1));
        }
        //cout<<v[a-1]<<"\n";
        if(v[a-1]>j){
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
	return 0;
}
