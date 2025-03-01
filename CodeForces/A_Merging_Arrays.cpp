#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int k=0;k<n;k++){
        cin>>arr1[k];
    }
    for(int k=0;k<m;k++){
        cin>>arr2[k];
    }
    int arr[n+m];
    int i=0,j=0,z=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr[z++]=arr1[i++];
        }else{
            arr[z++]=arr2[j++];
        }
    }
    while(i<n){
        arr[z++]=arr1[i++];
    }
    while(j<m){
        arr[z++]=arr2[j++];
    }
    for(i=0;i<n+m;i++){
        cout<<arr[i]<<" ";
    }

}