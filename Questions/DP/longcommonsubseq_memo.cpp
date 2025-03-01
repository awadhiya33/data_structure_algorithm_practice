#include<bits/stdc++.h>

using namespace std;
int memo[1000][1000];

int lcs(string a,string b,int m,int n){
    if(memo[m][n]!=-1){
        return memo[m][n];
    }
    if(m==0||n==0){
        memo[m][n]=0;
    }else{
        if(a[m-1]==b[n-1]){
            memo[m][n]=1+lcs(a,b,m-1,n-1);
        }else{
            memo[m][n]=max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
        }
    }
    return memo[m][n];
}

int main(){
    string a="abkfich";
    string b="bgfowirc";
    int m=a.size();
    int n=b.size();
    memset(memo,-1,sizeof(memo));
    cout<<lcs(a,b,m,n);
}