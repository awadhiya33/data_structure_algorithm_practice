#include<bits/stdc++.h>
using namespace std;

void tail_rec(int n,int k){
    if(n==0) return ;
    cout<<k<<" ";
    tail_rec(n-1,k+1);
}

void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    print(n);
    tail_rec(n,1);
}