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
        int s=a+1;
        if(j%2){
            while(j!=s){
                cout<<j<<" ";
                if(j%2)
                j-=2;
                else
                j+=2;
                if(j==-1)
                j=2;
            }
        }
        else{
            while(j!=s){
                cout<<j<<" ";
                if(!(j%2))
                j-=2;
                else
                j+=2;
                if(j==0)
                j=1;
            }
        }
        cout<<endl;
    }
	return 0;
}
