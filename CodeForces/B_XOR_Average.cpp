#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            n=n-2;
            while(n--){
                cout<<4<<" ";
            }
            cout<<2<<" "<<6<<endl;
        }else{
            while(n--){
                cout<<4<<" ";
            }
            cout<<endl;
        }
    }
}