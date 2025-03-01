#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    int i=0,j=0;
    int res[m];
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }else{
            res[j]=i;
            j++;
        }
    }
    while(i<n){
        i++;
    }
    while(j<m){
        res[j]=i;
        j++;
    }
    for(int k=0;k<m;k++){
        cout<<res[k]<< " ";
    }
}