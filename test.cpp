#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(b==0) return a;
  else return gcd(b,a%b);
}
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
     int count=INT_MIN;
     for(int i=n-1;i>=0;i--){
      for(int j=i;j>=0;j--){
        if(gcd(arr[i],arr[j])==1){
          count=max(count,i+j);
        }
      }
     }
    cout<<count+2<<endl;
    
  }
}