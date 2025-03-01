#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(2);
    vector<int> :: iterator it;  //vector<int> ::iterator => auto
    for(it=v.begin();it!=v.end();it++){
        cout<<*it;
    }
    cout<<endl;
    v.push_back(9);

    auto itr=v.begin(); //iterator in c++11
    for(;itr!=v.end();itr++){
        cout<<*itr;
    }
    cout<<endl;

//INSERT
    itr=v.begin()+2;
    v.insert(itr,4);

    itr=v.begin();
    for(;itr!=v.end();itr++){
        cout<<*itr;
    }
    cout<<endl;

//DELETE
    int key=4;
    auto iit=find(v.begin(),v.end(),key);    
    if(it==v.end()){
        cout<<"element not found";
    }else{
        v.erase(iit);
    }
    for(iit=v.begin();iit!=v.end();iit++){
        cout<<*iit;
    }
}