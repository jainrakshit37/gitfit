#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        string s1="";
        string s2="";
        if( (x%2!=0 && y%2!=0) || (x<2 || y<2) ){
            cout<<-1<<endl;
        }
        else{
            if((x+y)%2==0){
                for(int i=1;i<=x/2;i++){
                    s1+='a';
                }
                for(int i=1;i<=y;i++){
                    s1+='b';
                }
                for(int i=1;i<=x/2;i++){
                    s1+='a';
                }
                for(int i=1;i<=y/2;i++){
                    s2+='b';
                }
                for(int i=1;i<=x;i++){
                    s2+='a';
                }
                for(int i=1;i<=y/2;i++){
                    s2+='b';
                }
            }
            else{
                if(x%2==1){
                    s1+='a';
                    for(int i=1;i<=y/2;i++){
                        s1+='b';
                    }
                    for(int i=1;i<=x-2;i++){
                        s1+='a';
                    }
                    for(int i=1;i<=y/2;i++){
                        s1+='b';
                    }
                    s1+='a';
                    for(int i=1;i<=y/2;i++){
                        s2+='b';
                    }
                    for(int i=1;i<=x;i++){
                        s2+='a';
                    }
                    for(int i=1;i<=y/2;i++){
                        s2+='b';
                    }
                }
                else{
                    s1+='b';
                    for(int i=1;i<=x/2;i++){
                        s1+='a';
                    }
                    for(int i=1;i<=y-2;i++){
                        s1+='b';
                    }
                    for(int i=1;i<=x/2;i++){
                        s1+='a';
                    }
                    s1+='b';
                    for(int i=1;i<=x/2;i++){
                        s2+='a';
                    }
                    for(int i=1;i<=y;i++){
                        s2+='b';
                    }
                    for(int i=1;i<=x/2;i++){
                        s2+='a';
                    }
                }
            }
        cout<<s1<<endl<<s2<<endl;
        }
    }
	return 0;
}
