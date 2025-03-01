#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b,n;
int good(int x){
    return (x/a)*(x/b)>=n;
}
int_fast32_t main(){
    cin>>a>>b>>n;
    int l=0;
    int r=1;
    while(!good(r)) r*=2;

    while(r>l+1){
        int m=(l+r)>>1;
        if(good(m)) r=m;
        else l=m;
    }
    cout<<r<<endl;
    return 0;
}