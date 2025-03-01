#include<bits/stdc++.h>
using namespace std;

class myhash{
    int *arr;
    int cap,size;
    public:
    myhash(int b){
        this->cap=b;
        size=0;
        arr=new int[cap];
        for(int i=0;i<cap;i++){
            arr[i]=-1;
        }
    }
    int hash(int key){
        return key%cap;
    }
    void insert(int key){
        if(size==cap){
            cout<<"cannot inserted full\n";
        }
        int i=hash(key);
        while(arr[i]!=-1&&arr[i]!=-2&&arr[i]!=key){
            i=(i+1)%cap;
        }
        if(arr[i]==key){
            cout<<"duplicate element cannot inserted\n";
        }else{
            arr[i]=key;
            size++;
        } 

    }
    void remove(int key){
        int h=hash(key);
        int i=h;
        bool flag=true;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                flag=false;
                break;
            }
            i=(i+1)%cap;
            if(i==h) break;
        }
        if(flag==true){
            cout<<"cannot be deleted\n";
        }
    }
    void search(int key){
        int h=hash(key);
        int i=h;
        bool flag=true;
        while(arr[i]!=-1){
            if(arr[i]==key){
                cout<<"element found :) at : "<<i+1<<endl;
                flag =false;
                break;
            }
            i=(i+1)%cap;
            if(i==h){
                break;
            }
        }
        if(flag==true){
            cout<<"element not found :(\n";
        }
        
    }
    //printing myhash
    void print(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    myhash h(7);
    h.insert(70);
    h.insert(71);
    h.insert(9);
    h.insert(9);
    h.insert(56);
    h.insert(72);
    h.search(56);
    h.print(); 
}