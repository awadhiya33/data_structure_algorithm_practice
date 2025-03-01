#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[i]=1;
                count++;
            }
            else break;
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==0){
                arr[i]=1;
                count++;
            }
            else break;
        }
        if(count==n){
            cout<<0<<endl;
            continue;
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                flag=false;
                break;
            }
        }
        if(flag==true) cout<<1<<endl;
        else cout<<2<<endl;
    }
}