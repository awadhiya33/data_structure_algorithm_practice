#include<bits/stdc++.h>
using namespace std;
int memo[100000];
    int fib(int n){
        if(memo[n]==-1){
            int res;
            if(n==0||n==1){
            res=n;
            }else
            res= fib(n-1)+fib(n-2);
            memo[n]=res;
        }
        return memo[n];
    }
int main(){
    int n;
    cout<<"enter the length of fibonacci series\n";
    cin>>n;
    for(int i=0;i<n+1;i++){
        memo[i]=-1;
    }
    fib(n);
    for(int i=0;i<n;i++){
        cout<<memo[i]<<" ";
    }
    return 0;
}