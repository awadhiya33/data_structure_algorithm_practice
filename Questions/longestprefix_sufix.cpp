#include<bits/stdtr1c++.h>
using namespace std;

void fill_lps(string s,int lps[]){
    int n=s.size();             //O(n)...
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(s[i]==s[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len==0){
                lps[i]=0;
                i++;
            }else{
                len=lps[len-1];
            }
        }
    }
}
int longProperPreSuffix(string s,int n){
    for(int len=n-1;len>0;len--){           //O(n3)...
        bool flag=true;
        for(int i=0;i<len;i++){
            if(s[i]!=s[n-len+i]) flag=false;
        }
        if(flag==true) return len;
    }
    return 0;
}
int main(){
    string s="aacecaaa";
    int n=s.size();
    int lps[n];
    // for(int i=0;i<n;i++){
    //     lps[i]=longProperPreSuffix(s,i+1);
    // }
    fill_lps(s,lps);  
    for(int x :lps){
        cout<<x<<" ";
    }
}