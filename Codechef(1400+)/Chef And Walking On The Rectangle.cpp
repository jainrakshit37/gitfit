#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1 && b==1 || a==1 && b==2 || a==2 && b==1){
            cout<<0<<endl;
        }
        else if(a==1 || b==1 || c==1){
            cout<<c<<endl;
            continue;
        }
        else{
            cout<<c/2+(c%2)<<endl;
        }
    }
	return 0;
}
