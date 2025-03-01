#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  while(k--){
      int x;
      cin>>x;
      int l=0;
      int h=n-1;
      bool flag=false;
      while(l<=h){
          int mid=l+(h-l)/2;
          if(arr[mid]==x) {
              cout<<"YES"<<endl;
              flag=true;
              break;
          }
          else if(arr[mid]<x) l=mid+1;
          else h=mid-1;
      }
      if(flag==false) cout<<"NO"<<endl;
  }
  return 0;
}