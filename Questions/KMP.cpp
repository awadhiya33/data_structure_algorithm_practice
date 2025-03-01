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

void kmp(string txt,string pat,int lps[]){
    int n=txt.size();
    int m=pat.size();
    int i=0,j=0;
    while(i<n){
        if(txt[i]==pat[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<i-j<<" ";
            j=lps[j-1];
        }
        else if(i<n &&pat[j]!=txt[i]){
            if(j==0) i++;
            else j=lps[j-1];
        }
    }
}

int main(){
    string str="ababcababaad";
    string pat="ab";
    int n=str.size();
    int lps[n];
    fill_lps(str,lps); 
     kmp(str,pat,lps);
    
}