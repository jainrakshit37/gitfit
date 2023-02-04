#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> b(a);
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        int s=*max_element(b.begin(),b.end());
        cout<<a-s<<endl;
    }
	return 0;
}
