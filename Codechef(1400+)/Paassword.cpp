#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
	    int i;
	    string s;
	    cin>>s;
	    bool sc=false,lc=false,di=false,spc=false;
	    for(i=1;i<s.length()-1;i++){
	        if(s[i]>=97 && s[i]<=122){
	            sc=true;
	        }
	        if(s[i]>=65 && s[i]<=90){
	            lc=true;
	        }
	        if(s[i]>=48 && s[i]<=57){
	            di=true;
	        }
	        if(s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?'){
	            spc=true;
	        }
	    }
	    if(s[0]>=97 && s[0]<=122){
	        sc=true;
	    }
	    if(s[s.length()-1]>=97 && s[s.length()-1]<=122){
	        sc=true;
	    }
	    if(s.length()>=10 && sc==true && lc==true && di==true && spc==true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
