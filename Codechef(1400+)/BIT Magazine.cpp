#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int prs,dullpages;
        cin>>prs>>dullpages;
        double sum=(prs*(prs+1))/2;
        //cout<<sum<<' ';
        for(int i=0;i<dullpages;i++){
            int num;
            cin>>num;
            sum-=num;
        }
        //cout<<sum<<" ";
        double torepages;
        cin>>torepages;
        double totalpages=(prs+1)/2;
        sum=((totalpages-torepages)*1.00/totalpages)*sum;
        cout<<fixed<<setprecision(4)<<sum<<"\n";    
    }
	return 0;
}
