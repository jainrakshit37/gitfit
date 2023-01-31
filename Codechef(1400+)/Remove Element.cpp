#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	   ll arr[n];
	   ll mn=INT_MAX,mx=INT_MIN;
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	       mn=min(mn,arr[i]);
	       mx=max(mx,arr[i]);
	   }
	   sort(arr,arr+n);
	   if(n==1)
	   cout<<"yes"<<endl;
	   else{
	       //sort(arr,arr+n);
	       if(mn+mx<=k)
	       cout<<"yes"<<endl;
	       else
	       cout<<"no"<<endl;
	   }
	   
	}
	return 0;
}
