#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        vector<int> v(2*a);
        vector<int> fin(2*a);
        for(int i=0;i<2*a;i++){
            scanf("%d",&v[i]);
        }
        sort(v.begin(),v.end());
        int temp=0;
        for(int i=0;i<a*2;i+=2){
            fin[i]=v[temp];
            fin[i+1]=v[temp+a];
            temp++;
        }
        cout<<fin[a]<<endl;
        for(auto i:fin){
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
    }
	return 0;
}
