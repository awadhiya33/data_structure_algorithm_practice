#include<bits/stdc++.h>
using namespace std;

class myhash{
    int bucket;
    list<int> *table;
    public:
    myhash(int b){
        this->bucket=b;
        table=new list<int>[b];
    }
    void insert(int key){
        int i=key%bucket;
        table[i].push_back(key);
    }
    void remove(int key){
        int i=key%bucket;
        table[i].remove(key);
    }
    void search(int key){
        int i=key%bucket;
        list<int> :: iterator it=find(table[i].begin(),table[i].end(),key);
        if(it!=table[i].end()){
            cout<<"element is found :)"<<endl;
        }
    }
    //printing myhash
    void print(){
        for(int i=0;i<bucket;i++){
            for(auto x: table[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    myhash h(7);
    h.insert(70);
    h.insert(71);
    h.insert(9);
    h.insert(56);
    h.insert(72);
    h.search(56);
    for(int i=2;i<100;i++){
        h.insert(i*5);
    }
    h.print(); 
}