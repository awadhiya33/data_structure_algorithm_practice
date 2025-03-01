#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> v;

bool good(double m){
    int count=0;
    for(int i=0;i<n;i++){
        count+=floor(v[i]/m);
    }
    return (count>=k);
}

int main(){
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    double l=0;  // good
    double r=1e8; // bad
    for(int i=0;i<100;i++){
        double m=(l+r)/2;
        if(good(m)){
            l=m;
        }else{
            r=m;
        }
    }
    cout<<setprecision(20)<<l<<endl;
}