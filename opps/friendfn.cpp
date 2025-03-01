#include<iostream>
using namespace std;
class A;
class B{
    int b;
    public :
    void getdata(int x){
        b=x;
    }
    void putdata(){
        cout << "b = " << b << endl;
    }
    friend void sum(A,B);
};
class A{
    int a;
    public :
    void getdata(int x){
        a=x;
    }
    void putdata(){
        cout << "a = " << a << endl;
    }
    friend void sum(A,B);
};
void sum(A o1,B o2){
    cout << "sum = " << o1.a+o2.b << endl;
}
int main(){
    A o1;
    B o2;
    o1.getdata(100);
    o2.getdata(200);
    o1.putdata();
    o2.putdata();
    sum(o1,o2);
}