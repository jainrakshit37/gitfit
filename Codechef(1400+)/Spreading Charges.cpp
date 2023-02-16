#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int count=0;
        vector<int> charge;
        for(int i=0;i<a;i++){
            if(s[i]=='0'){
                count++;
            }
            else{
                charge.push_back(i);
            }
        }
        int ans=0;
        if(charge.size()==0){
            cout<<count<<endl;
        }
        else if(charge.size()==1){
            cout<<0<<endl;
        }
        else{
            for(int k=1;k<charge.size();k++){
                if(s[charge[k]]!=s[charge[k-1]]){
                    if((charge[k]-charge[k-1])%2==0){
                        ans+=1;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
	return 0;
}
