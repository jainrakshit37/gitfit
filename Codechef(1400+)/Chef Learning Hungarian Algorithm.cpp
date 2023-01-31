#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int sr=0,sc=0;
        int v[a][a];
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(v[i][j]==0){
                    sr++;
                    break;
                }
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(v[j][i]==0){
                    sc++;
                    break;
                }
            }
        }
        if(sr>=a && sc>= a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
