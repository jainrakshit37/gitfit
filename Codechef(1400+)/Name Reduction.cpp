#include <bits/stdc++.h>
using namespace std;
string solve(string f1,string f2){
    if(f2.length()>f1.length()){
        return "NO";
    }
    vector<int> a(26,0),b(26,0);
    for(auto x:f1){
        a[x-'a']++;
    }
    for(auto x:f2){
        b[x-'a']++;
    }
    for(auto x:f2){
        if(a[x-'a']<b[x-'a']){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string m,n;
        cin>>m>>n;
        string f1=m+n;
        string f2="";
        string g;
        int t;
        cin>>t;
        while(t--){
            cin>>g;
            f2+=g;
        }
        cout<<solve(f1,f2)<<endl;
    }
	return 0;
}
