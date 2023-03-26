#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int num=0;
        int numg=0;
        int numr=0;
        bool g=false;
        bool r=false;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                num++;
            }
            if(s[i]=='R'){
                numr++;
            }
            if(s[i]=='G'){
                numg++;
            }
        }
        if(s[0]=='R') numr++;
        else numg++;
        if(num>=3 && s[0]==s[s.length()-1]){
            num++;
        }
        if(num<=2 && numg==numr){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
	return 0;
}
