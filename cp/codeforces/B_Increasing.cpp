#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int arr[n];
     unordered_set<int> s;
     bool flag=false;
     for(int i=0;i<n;i++){
      cin>>arr[i];
      if(s.find(arr[i])==s.end())
      s.insert(arr[i]);
      else{
        flag=true;
        
      }
     }
     if(flag==true) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
 
    
  }
}