#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==1){ 
            cout<<1<<endl; 
            continue;
        }
        int b=log2(a);
        int c=pow(2,b);
        int j=a-c;
        if(j==0){
            cout<<a/2<<endl;
        }
        else{
            cout<<max(c/2,a-c+1)<<endl;
        }
    }
	return 0;
}
