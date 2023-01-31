#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    set<int> s;
	    s.insert(1);
	    for(int i=2;i*i<=a;i++){
	        if(a%i==0){
	            s.insert(i);
	            s.insert(a/i);
	            break;
	        }
	    }
	    if(s.size()!=3){
	        cout<<-1<<"\n";
	    }
	    else{
	        for(auto p: s){
	            cout<<p<<" ";
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}
