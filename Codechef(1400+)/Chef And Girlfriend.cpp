#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        string s2,s1;
        cin>>s2>>s1;
        int dist;
        cin>>dist;
        int ah=stoi(s2.substr(0,2));
        int am=stoi(s2.substr(3,5));
        int bh=stoi(s1.substr(0,2));
        int bm=stoi(s1.substr(3,5));
        float gap=(ah-bh)*60+(am-bm);
        float ans1=gap+dist;
        float ans2=0;
        if(dist*2<=(ah-bh)*60+(am-bm)){
            ans2=(ah-bh)*60+(am-bm);
        }
        else{
            ans2=gap+((dist-(gap-dist))/2);
        }
        cout<<fixed<<setprecision(1)<<ans1<<" "<<fixed<<setprecision(1)<<ans2<<endl;
    }
	return 0;
}
