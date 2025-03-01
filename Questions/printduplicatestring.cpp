#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abhishekkuhflkadkjhakjhdlahdlaejiedjalwkjdslkajdkwjmar";
    int arr[256]={0};
 
    // for(int i=0;i<s.size();i++){
    //     arr[s[i]]++;
    // }
    // for(int i=0;i<s.size();i++){
    //     if(arr[s[i]]>1){
    //         cout<<s[i];
    //         arr[s[i]]=1;
    //     }
    // }
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        auto it=m.find(s[i]);
        if(it!=m.end()){
            m[s[i]]++;
        }else{
            m.insert({s[i],1});
        }
    }
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(itr->second>1){
            cout<<itr->first<<" "<<itr->second<<endl;
        }
    }
}