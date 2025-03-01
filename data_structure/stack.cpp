#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int arr[10];
    int top=-1;
    void push(int x){
        if(top>=10){
            cout<<"stack is overflow\n";
        }else{
            top++;
            arr[top]=x;
        }
    }
    void pop(){
        if(top<0){
            cout<<"stack is underflow\n";
        }else{
            top--;
        }
    }
    void Top(){
        cout<<arr[top]<<endl;
    }
};

int main(){
    Stack a;
    a.push(5);
    a.push(3);
    a.push(8);
    a.Top();
    a.pop();
    a.Top();

    return 0;
}