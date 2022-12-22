#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give your length-";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d=0;
    int e=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            for(int k=j;k<=i;k++){
                d+=a[k];
            }
            e=max(e,d);
            d=0;
        }
    }
    cout<<e<<"-is max sum of a subarray";
    return 0;
}