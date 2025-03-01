#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={3,3,4,4,5,8,8,10,10};
    int n =sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<arr[i];
    }
} 