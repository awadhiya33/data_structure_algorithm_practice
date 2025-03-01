#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real;
    int img;
    public:

    Complex(){
        this->real=0;
        this->img=0;
    }    
    Complex(int x,int y){
        this->real=x;
        this->img=y;
    }
    void print(){
        cout<<"real = "<<real<<" img = "<<img<<endl;
    }
    Complex operator ++(){  //this is for ++c
        Complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
    Complex operator ++(int){  //this is for c++
        Complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
    Complex operator +(Complex &obj);
    friend Complex operator -(Complex &obj1,Complex &obj2);//friend function takes 2 arguments!!
};

Complex Complex::operator +(Complex &obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
Complex operator -(Complex &obj1,Complex &obj2){
        Complex temp;
        temp.real=obj1.real-obj2.real;
        temp.img=obj1.img-obj2.img;
        return temp;
    }

int main(){
    Complex a(14,7);
    a.print();
    Complex b(2,6);
    b.print();
    Complex c=a+b;  //c=a.add(b);
    c.print();
    ++c;
    c.print();
    c=a-b;
    c.print();
}