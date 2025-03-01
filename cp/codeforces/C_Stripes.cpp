#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n=8;
 
     char arr[n][n];
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
     }
     char res;
     for(int i=0;i<n;i++){
        if(arr[i][0]=='R'){
            res='R';
            for(int j=0;j<n;j++){
                if(arr[i][j]=='B'){
                    res='B';
                }
            }
        }
     }
    cout<<res<<endl;
    
  }
}