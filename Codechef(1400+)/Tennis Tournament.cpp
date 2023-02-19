#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int sum=a*(a-1)/2;
        vector<vector<int>>v(a,vector<int>(a,0));
        if(a%2==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<'\n';
            for(int i=0;i<a;i++){
                for(int j=1;j<=a/2;j++){
                    //cout<<(i+j)%a<<" ";
                    v[i][(i+j)%a]=1;
                }
            }
            for(int i=0;i<a;i++){
                for(int j=0;j<a;j++){
                    cout<<v[i][j];
                }
                cout<<endl;
            }
        }
    }
	return 0;
}
