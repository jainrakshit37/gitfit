#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        scanf("%d",&a);
        vector<int>v(2*a);
        vector<bool>t(a+1,0);
        set<int>first;
        set<int>second;
        int l;
        for(int i=0;i<2*a;i++){
            scanf("%d",&l);
            v[i]=l;
            if(t[v[i]]==0){
                first.insert(v[i]);
                t[v[i]]=1;
            }
            else{
                second.insert(v[i]);
                t[v[i]]=0;
            }
        }
        bool flag=1;
        for(int i=0;i<=a;i++){
            if((first.count(i)==1 && second.count(i)==0)||(first.count(i)==0 && second.count(i)==1)){
                flag=0;
                break;
            }
            if(first.count(i)==0 && second.count(i)==0){
                flag=1;
                break;
            }
        }
        if(flag){
            printf("YES\n");
        }
        else printf("NO\n");
    }
	return 0;
}
