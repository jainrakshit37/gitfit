#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> v(a);
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        int p=0;
        sort(v.begin(),v.end());
        for(int i=a/2;i>=0;i--){
            if(v[i]!=v[a/2]){
                p=i+1;
                break;
                
            }
        }
        cout<<a-p<<endl;
    }
	return 0;
}
