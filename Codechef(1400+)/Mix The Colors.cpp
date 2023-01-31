#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int g;
        set<int> b;
        for(int i=0;i<a;i++){
            cin>>g;
            b.insert(g);
        }
        cout<<a-b.size()<<endl;
    }
	return 0;
}
