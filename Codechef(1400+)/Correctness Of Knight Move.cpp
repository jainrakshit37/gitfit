#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        char c1=s[0];
        int i1=s[1];
        char c2=s[3];
        int i2=s[4];
        if(s.length()!=5){
            cout<<"Error"<<endl;
        }
        else{
            if ((s[0]>=97&&s[0]<=104)&&(s[3]>=97&&s[3]<=104)&&(s[2]==45)&&(s[1]>=49&&s[1]<=56)&&(s[4]>=49&&s[4]<=56)){
                if ((s[3]-s[0])*(s[4]-s[1])==2||(s[3]-s[0])*(s[4]-s[1])==-2){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                cout<<"Error"<<endl;
            }
        }
    }
	return 0;
}
