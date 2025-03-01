#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n){
        int arr[3];
        int sum=0;
        for(int i=0;i<3;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>1) count++;

        n--;
    }
    cout<<count;
    return 0;
}