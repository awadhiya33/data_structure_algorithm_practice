#include<bits/stdc++.h>
using namespace std;

class A{
    int x=5;
    public:
    void eat(){
       std::cout<<"Animal is eating \n";
    }
};
class B:public A{
    int y=10;
    public:
    void eat(){
       // A::eat();
        std::cout<<"Dog is eating \n";
    }
};

int main(){
    A animal;
    B dog;
    animal.eat();
    dog.eat();

 /*   A *a;  
    B b;  
    a = &b; 
    a->eat(); 

In the above example, * a is the base class pointer.
 The pointer can only access the base class members but not the members of 
 the derived class. Although C++ permits the base pointer to point to any object derived 
 from the base class, it cannot directly access the members of the derived class. Therefore,
  there is a need for virtual function which allows the base pointer to access the members of the derived class.
*/
    return 0;
}