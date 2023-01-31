#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        string s;
        cin>>s;
        int i,anss=0;
        for(i=0;i<a;i++){
            if(s[i]=='1')
            anss++;
            else
            break;
        } 
        int ansss=0;
        int ans=0;
        for(int x=i;x<a;x++){
            ans=0;
            while(s[x]=='1'){
                x++;
                ans++;
            }
            ansss=max(ans,ansss);
        }
        ansss=ansss+anss;
        cout<<ansss<<endl;
    }
    return 0;
}
