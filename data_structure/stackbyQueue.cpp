#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    queue<int> q;
    void Push(int x){
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();

        }
    }
    void Pop(){
        q.pop();
    }
    void top(){
        cout<<q.front()<<endl;
    }
};

int main(){
    Stack a;
    a.Push(5);
    a.Push(7);
    a.Push(2);
    a.top();
    a.Pop();
    a.top();
}