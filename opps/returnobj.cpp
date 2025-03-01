#include<iostream>
using namespace std;
class Test{
    int a,b;
    public :
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    friend Test sum(Test,Test);
    void putdata(Test);
};
Test sum(Test t1,Test t2){
    Test t;
    t.a=t1.a+t2.a;
    t.b=t1.b+t2.b;
    return t;
}
void Test:: putdata(Test t){
    cout << "a = " << t.a << " | " << "b = " << t.b << endl;
}
int main(){
    Test A,B,C;
    A.getdata(100,100);
    B.getdata(200,200);
    C=sum(A,B);
    A.putdata(A);
    B.putdata(B);
    C.putdata(C);
}