#include<iostream>
using namespace std;
class A{
    int a;
    public :
    void getval_a(int x){
        a=x;
    }
    int get_a(){
        return a;
    }
};
class B : public A{
    int b,c;
    public :
    void getval_b(int x){
        b=x;
    }
    void sum(){
        c=b+get_a();
    }
    void disp(){
        cout <<"A = " << get_a()<<endl;
        cout <<"B = " << b << endl;
        cout <<"sum = " << c << endl;
    }
};
int main(){
    B obj;
    obj.getval_a(10);
    obj.getval_b(20);
    obj.sum();
    obj.disp();
}