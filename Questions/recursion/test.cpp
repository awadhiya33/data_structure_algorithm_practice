#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string s;
    cin>>s;
    int l=0;
    int h=s.length()-1;
    while(l<h){
       int x=(s[l]-'0')+(s[h]-'0');
      // cout<<x;
       a+=to_string(x); 
       l++;
       h--;
    }
    cout<<a;
    
}