#include <bits/stdc++.h>
using namespace std;
  
int memo[10000][10000];
int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0||W==0){
           return 0;
       }
       if(memo[n-1][W]==-1){
           if(wt[n-1]<=W){
           memo[n-1][W]= max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
       if(wt[n-1]>W){
           memo[n-1][W]= knapSack(W,wt,val,n-1);
       } 
       }
       return memo[n-1][W];
       
    }


int main()
{
    memset(memo,-1,sizeof(memo));

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
    cout<<knapSack(w,wt,val,n)<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<w;j++){
    //         cout<<memo[i];
    //     }
    //     cout<<endl;
    // }
    return 0;
}