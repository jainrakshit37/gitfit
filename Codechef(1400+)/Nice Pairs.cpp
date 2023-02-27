#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    std::ios::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<a;i++){
            for(int j=i+1;j<=i+9;j++){
                if(j-i==abs(s[j]-s[i])){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
