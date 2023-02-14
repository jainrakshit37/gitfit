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
        vector<string> c(a);
        string s;
        for(int i=0;i<a;i++){
            cin>>v[i];
            getline(cin,c[i]);
        }
        cout<<v[0]<<c[a-1]<<endl;
        for(int i=1;i<a;i++){
            if(v[a-i]=="Right"){
                cout<<"Left"<<c[a-1-i]<<endl;
            }
            if(v[a-i]=="Left"){
                cout<<"Right"<<c[a-1-i]<<endl;
            }
        }
    }
	return 0;
}
