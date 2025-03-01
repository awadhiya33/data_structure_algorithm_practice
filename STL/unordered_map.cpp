#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",15});
    // for(auto x : m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    auto it =m.find("ide");
    if(it!=m.end()){
        cout<<"found with value : "<<(*it).second<<endl;
    }else{
        cout<<"not found\n";
    }

    // if(m.count("gfg")>0){
    //     cout<<"found\n";
    // }else{
    //     cout<<"not found\n";
    // }

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"size : "<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin());
    cout<<"size after erase : "<<m.size()<<endl;

}

/*
O[1]={
    begin();
    end();    =>in worst case
    size();
    empty();
}
O[1]={
    count();
    find();
    erase(key); =>in avg case
    insert();
    []
    at

}
*/