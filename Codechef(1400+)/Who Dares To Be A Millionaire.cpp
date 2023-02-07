#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    while(n--){
        int ques;
        cin>>ques;
        vector<char> ans(ques);
        int corrects=0;
        vector<char> chefans(ques);
        for(int i=0;i<ques;i++){
            cin>>ans[i];
        }
        for(int i=0;i<ques;i++){
            cin>>chefans[i];
            if(ans[i]==chefans[i]){
                corrects++;
            }
        }
        vector<int> dollar(ques+1);
        for(int i=0;i<=ques;i++){
            cin>>dollar[i];
        }
        int amount=*max_element(dollar.begin(),dollar.begin()+corrects+1);
        if(corrects==ques){
            cout<<dollar[ques]<<endl;
        }
        else
        cout<<amount<<endl;
    }
	return 0;
}
