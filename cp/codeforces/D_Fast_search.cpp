#include<bits/stdc++.h>
using namespace std;

int closetLeft(int arr[],int n,int v){
    int l=-1;
    int h=n;
    while(l+1<h){
        int mid=(l+h)>>1;
        if(arr[mid]<=v) l=mid;
        else h=mid;
    }
    return l+1;
}

int closetRight(int arr[],int n,int v){
    int l=-1;
    int h=n;
    while(l+1<h){
        int mid=(l+h)>>1;
        if(arr[mid]<v) l=mid;
        else h=mid;
    }
    return h+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
    while(k--){
        int l,r;
        cin>>l>>r;
        int res=closetLeft(arr,n,r)-closetRight(arr,n,l)+1;
        cout<<res<<" ";
    }
}