#include<bits/stdc++.h>
using namespace std;

void remdup(string s){
    istringstream ss(s);
    string word;
    unordered_map<string,int> mp;
    while(ss){
        ss>>word;
        if(mp.find(word)==mp.end()){
            mp.insert({word,1});
            cout<<word<<" ";
        }
    }
}

int main(){
    string s="my name is abhi my home is aurangabad";
    remdup(s);
    return 0;
}