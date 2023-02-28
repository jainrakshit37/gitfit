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
        int ans[25]={1,1,3,5,11,21,43,85,171,341,683,1365,2731,5461,10923,21845,43691,87381,174763,349525,699051,1398101,2796203,5592405,11184811};
        if(a==1){
            cout<<1<<" "<<2<<" ";
            continue;
        }
        int c=pow(2,a);
        cout<<ans[a-1]<<" "<<c<<" ";
    }
    cout<<endl;
	return 0;
}
