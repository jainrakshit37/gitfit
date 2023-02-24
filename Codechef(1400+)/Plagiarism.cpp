#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,k;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&k);
        vector<int> v(k);
        map<int,int> check;
        vector<int> ans;
        for(int i=0;i<k;i++){
            scanf("%d",&v[i]);
            check[v[i]]++;
        }
        for(auto i: check){
            if(i.first<=a && i.second>1){
                ans.push_back(i.first);
            }
        }
        cout<<ans.size()<<" ";
        for(auto i:ans){
            printf("%d",i);
            printf(" ");
        }
        cout<<endl;
    }
	return 0;
}
