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
     bool flag=false;
     int i,j;
     for( i=n-1;i>=0;i--){
      for( j=i;j>=0;j--){
        if(gcd(arr[i],arr[j])==1){
          count=max(count,i+j);
          flag=true;
          break;
        }
      }
     }
     if(flag==true)
    cout<<count+2<<endl;
    else
    cout<<-1<<endl;
    
  }
}