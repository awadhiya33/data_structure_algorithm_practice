#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abhishek";
    string rev;
    stack<char> c;
    for(int i=0;i<s.size();i++){
        c.push(s[i]);
    }
    while(!c.empty()){
        rev+=c.top();
        c.pop();
    }
    cout<<rev;

    return 0;
}