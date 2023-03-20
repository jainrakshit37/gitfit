#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        //b->period
        //a->length
        int a,b;
        cin>>a>>b;
        int segment=a/b;
        if(b<=2 || (a<b) || (a%b!=0) ){
            cout<<"impossible\n";
        }
        else{
            while(segment--){
                cout<<'a';
                for(int i=1;i<=b-2;i++){
                    cout<<'b';
                }
                cout<<'a';
            }
            cout<<endl;
        }
    }
	return 0;
}
