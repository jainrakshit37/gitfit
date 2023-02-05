#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        set<int>s;
        int l;
        for(int i=0;i<a;i++){
            cin>>l;
            s.insert(l);
        }
        int j=0;
        while(b>=0){
            if(s.count(j)){
                j++;
            }
            else{
                j++;
                b--;
            }
        }
        cout<<j-1<<endl;
    }
	return 0;
}
