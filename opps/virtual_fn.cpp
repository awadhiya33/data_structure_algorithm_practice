#include<bits/stdc++.h>
using namespace std;

class A{
    int x=5;
    public:
    virtual void eat(){
       std::cout<<"Animal is eating \n";
    }
};
class B:public A{
    int y=10;
    public:
    void eat(){
        std::cout<<"Dog is eating \n";
    }
};

int main(){

    A ab;
    ab.eat();  
    A *a;  
    B b;  
    a = &b; 
    a->eat(); //dog is eating
    return 0;
}