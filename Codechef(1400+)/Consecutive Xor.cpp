#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    int b[a];
	    int flag=0;
	    for(int i=0;i<a;i++){
	        cin>>b[i];
	        flag^=b[i];
	    }
	    if(a%2!=0 || flag==0){
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
