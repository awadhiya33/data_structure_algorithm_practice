#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(45);
    s.insert(18);
    // for(int x : s){
    //     cout<<x<<" ";
    // }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // cout<<"size "<<s.size()<<endl;
    // s.clear();
    // cout<<"after clear size "<<s.size()<<endl;


    // auto itr=s.find(15);
    // if(itr!=s.end()){
    //     cout<<"found\n";
    // }else{
    //     cout<<"not found\n";
    // }

    auto itr=s.count(15);//return 1 if found 0 if not found
    if(itr==1){
        cout<<"found\n";
    }else{
        cout<<"not found\n";
    }

    cout<<"size "<<s.size()<<endl;
    // s.erase(15);
    // cout<<"after erasing size "<<s.size()<<endl;
    auto it=s.find(15);
    s.erase(it);
    cout<<"after erasing size "<<s.size()<<endl;
    //s.erase(s.begin(),s.end());

}