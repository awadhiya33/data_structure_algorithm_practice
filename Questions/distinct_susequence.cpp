#include<bits/stdc++.h>
using namespace std;

    set<string> st;
void generate(string s){
 
    if(s.size()==0){
        return;
    }
    if(st.find(s)==st.end()){
        st.insert(s);
        for(int i=0;i<s.size();i++){
            string t=s;
            t.erase(i,1);
            generate(t);
        }
    }
    return;
}

int main(){
    string s;
    cin>>s;
    int n=s.size();
    generate(s);
    int count=0;
    for(auto it=st.begin();it!=st.end();it++){
        string str=*it;
        if(str.size()==n-2){
            count++;
        }
    }
    cout<<count;
    return 0;
}