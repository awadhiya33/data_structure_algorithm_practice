#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m=0;
        int n,z;
        cin>>n>>z;
        int arr[n];
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>m) m=arr[i];
            int p=arr[i]|z;
            arr2[i]=p;
            if(arr2[i]>m) m=arr2[i];
        }
        // for(int i=0;i<n;i++){
        //     if(arr2[i]>m) m=arr2[i];
        // }
        // for(int i=0;i<n;i++){
        //     m=max(arr[i],m);
        //     int a=arr[i];
        //     arr[i]=a|z;
        //     m=max(arr[i],m);
        //     z=arr[i]&a;
        // }

        cout<<m<<endl;
    }
}