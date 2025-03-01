#include<bits/stdc++.h>
using namespace std;
int sum=0;
int mx=INT_MIN;
int solve(vector<int> b,vector<int> m,int i){
    if(i==b.size()) return 0;
    
    
    if(b[i]==0) return solve(b,m,++i);
    else{
        if(b[i-1]==0){
            // cout<<m[i]<<endl;
            vector<int> t=b;
            t[i]=0;
            return max((m[i-1]+solve(t,m,++i)),(m[i]+solve(b,m,++i)));
        }else{
            return m[i]+solve(b,m,++i);
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        vector<int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m.push_back(x);
        }

        cout<<solve(b,m,1)<<endl;

    }
    return 0;
}