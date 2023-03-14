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
        int lb=0,rb=0;
        for(auto i:s){
            if(i=='B'){
                lb++;
            }
            else{
                break;
            }
        }
        rb=s.length()-lb-1;
        if(lb==rb){
            cout<<"Chef\n";
        }
        else{
            cout<<"Aleksa\n";
        }
    }
	return 0;
}
