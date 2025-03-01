#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        arr[0]=x;
        arr[n-1]=1;
        bool flag;
        if(n%x!=0||x==1){
            cout<<-1<<endl;
            continue;
        }
        unordered_set<int> s;
        s.insert(x);
        s.insert(1);
        for(int i=1;i<n-1;i++){
            flag=false;
            for(int j=2;j<=n;j++){
                if(s.find(j)!=s.end()) continue;
                if(j%(i+1)==0){
                    arr[i]=j;
                    flag=true;
                    s.insert(j);
                    break;
                }
            }
            if(flag==false){
                cout<<-1<<endl;
                break;
            }
        }
        if(flag==true){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}