#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        float a,b,c;
        cin>>a>>b>>c;
        float inco=b*a;
        vector<pair<int,int>> v;
        int flag=0;
        for(int i=1;i<=c;i++){
            float m,cost,ac;
            cin>>m>>cost>>ac;
            float ans;
            ans=(ac/m)+(cost*b);
            if(ans<inco){
                inco=ans;
                flag=i;
            }
        }
        cout<<flag<<endl;
    }
	return 0;
}
