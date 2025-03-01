#include<bits/stdtr1c++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m;
    cin>>n>>m;
    ll x=n%2==0?n/2:n/2+1;
    ll y=m%2==0?m/2:m/2+1;
    cout<<x*y;
    return 0;
}