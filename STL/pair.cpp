#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
   // p=make_pair(2,"abhi");
    p={3,"abhishek"};
   // cout<<p.first<<p.second;
    int a[3]={2,4,3};
    int b[3]={6,8,7};
    pair<int,int> arr[3];
    arr[0]={2,6};
    arr[1]={4,8};
    arr[2]={3,7};
    swap(arr[0],arr[2]);
    // for(int i=0;i<3;i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }
    vector<pair<int,int> > v={{2,6},{4,8},{3,7}};
    // for(pair<int,int> &value : v){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    auto it=v.begin();
    for(;it!=v.end();it++){
        cout<<(*it).first<<" "<<it->second<<endl;
    }

}