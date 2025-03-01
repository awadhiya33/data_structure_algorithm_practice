#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int> input,output;
    void enqueue(int x){
        input.push(x);
        //cout<<input.top();
    }
    void dequeue(){
        if(!output.empty()){
            output.pop();
        }else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            output.pop();
        }
    }
    void Top(){
        if(!output.empty()){
            cout<<output.top();
        }else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            cout<<output.top();
        }
    }
};


int main(){
    Queue a;
    a.enqueue(5);
    a.enqueue(8);
    a.enqueue(3);
    a.Top();
    a.dequeue();
    a.Top();
    a.enqueue(1);
    a.dequeue();
    a.dequeue();
    a.Top();

    return 0;
}