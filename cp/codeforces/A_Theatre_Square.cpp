#include<bits/stdtr1c++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    ll x=n%a==0?n/a:n/a+1;
    ll y=m%a==0?m/a:m/a+1;
    
    cout<<x*y;
    return 0;
}