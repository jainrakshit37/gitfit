#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int j=a;
        while(j>=2 || j>=1){
            cout<<j<<" ";
            j-=2;
        }
        if(j==-1) j=2;
        else j=1;
        while(j<=a){
            cout<<j<<" ";
            j+=2;
        }
        cout<<endl;
    }
    return 0;
}

