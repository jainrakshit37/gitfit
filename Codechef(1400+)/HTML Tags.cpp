#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        bool flag = false;
        for(int i=2;i<s.length()-1;i++){
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag && s[0]=='<' && s[1]=='/' && s[s.length()-1]=='>'){
            cout<<"Success"<<endl;
        }
        else{
            cout<<"Error"<<"\n";
        }
    }
	return 0;
}
