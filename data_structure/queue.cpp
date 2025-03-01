#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int arr[10];
    int l=-1,r=-1;
    void push(int x){
        if(r>=10){
            cout<<"Queue is full\n";
        }
        else if(l==-1&&r==-1){
            l++;
            r++;
            arr[r]=x;
        }else{
            r++;
            arr[r]=x;
        }
    }
    void pop(){
        if(r==l){
            cout<<"cannot delete\n";
            r=l=-1;
        }else{
            l++;
        }
    }
    void top(){
        cout<<arr[l]<<endl;
    }
};
int main(){
    Queue a;
    a.push(5);
    a.push(4);
    a.push(1);
    a.top();
    a.pop();
    a.top();
    return 0;
}