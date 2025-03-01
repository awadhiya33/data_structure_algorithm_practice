#include<bits/stdc++.h>
using namespace std;
#define d 256
const int q=101;
void rabin_karp(string pat,string txt,int n,int m){
    int h=1;
    for(int i=1;i<m;i++){
        h=(h*d)%q;
    }
    int p=0,t=0;
    for(int i=0;i<m;i++){
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }
    for(int i=0;i<n-m;i++){
        if(p==t){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(txt[j+i]!=pat[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<i<<" ";
            }
        }
        if(i<n-m){
            t=((d*(t-txt[i]*h))+txt[i+m])%q;
            if(t<0){
                t=t+q;
            }
        }
    }
}

int main(){
    string txt="abhishekishandsome";
    string p="sh";
    int n=txt.size();  //NAIVE method : Time complexity is O((m-n+1)*m)
    int m=p.size();
    // for(int i=0;i<=n-m;i++){
    //     int j;
    //     for(j=0;j<m;j++){
    //         if(p[j]!=txt[i+j]){
    //             break;
    //         }
    //     }
    //     if(j==m){
    //         cout<<i<<" ";
    //     }
    // }
    rabin_karp(p,txt,n,m);
}