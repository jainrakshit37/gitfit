#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int k=1;
        if(a%4){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            while(k<=a/4){
                cout<<k<<" ";
                k++;
            }
            k+=a/2;
            while(k<=a){
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
            k=a/4+1;
            while(k<=(a*3)/4){
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
    }
	return 0;
}
