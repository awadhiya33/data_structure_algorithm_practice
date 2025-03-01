#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
    ll n,m;
    cin>>n>>m;

    ll a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
     //int i=0,j=0;
    ll count=0;
    // while(i<n&&j<m){
    //     if(a[i]==b[j]){
    //         count++;
    //         j++;
    //     }else if(a[i]<b[j]){
    //         j--;
    //         i++;
    //     }else{
    //         j++;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(a[i]==b[j]){
    //             count++;
    //         }
    //     }
    // }

    unordered_map<ll,ll> mp;
    for(ll i=0;i<m;i++){
        if(mp.find(b[i])!=mp.end()) {
            mp[b[i]]++;
        }else{
            mp.insert({b[i],1});
        }
    }
    for(ll i=0;i<n;i++){
        if(mp.find(a[i])!=mp.end()){
            count+=mp[a[i]];
        }
    }
    cout<<count;
}