#include<bits/stdc++.h>
using namespace std;

int closestToLeft(int arr[],int n,int v){
    int l=-1;
    int r=n;
    while(l+1<r){
        int mid=l+r>>1;
        if(arr[mid]<=v) l=mid;
        else r=mid;
    }
    return l;
}

int main(){
    int n,k,x;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(k--){
        int v;
        cin>>v;
        cout<<closestToLeft(arr,n,v)+1<<endl;
    }
}