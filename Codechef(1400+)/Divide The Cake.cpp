#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a<=360 && 360%a==0){
            cout<<"y ";
        }
        else cout<<"n ";
        if(a<=360) cout<<"y ";
        else cout<<"n ";
        if(a<=26) cout<<"y"<<endl;
        else cout<<"n"<<endl;
    }
    
	return 0;
}
