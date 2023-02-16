#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int l=a/2;
        vector<int> b(l);
        int j=1;
        if(a%2){
            cout<<-1;
        }
        else{
            for(int i=0;i<l;i++){
                if(i%2){
                    b[i]=-j;   
                }
                else{
                    b[i]=j;
                }
                cout<<b[i]<<" ";
                j+=2;
            }
            reverse(b.begin(),b.end());
            for(int i=0;i<l;i++){
                cout<<-b[i]<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}
