#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,w;
    cin>>n>>w;
    int val[n];
    int wt[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    
    int t[n+1][w+1];
    memset(t,0,sizeof(t));

    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(wt[i-1]<=j){
                t[i][j]=max((val[i-1]+t[i-1][j-wt[i-1]]),(t[i-1][j]));
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    cout<<endl<<t[n][w];
    return 0;
}