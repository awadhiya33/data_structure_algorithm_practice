#include<iostream>
using namespace std;
class Time{
    int h,m;
    public :
    void getdata(int,int);
    void putdata();
    void sum(Time,Time);

};

void Time:: getdata(int x,int y){
    h=x;
    m=y;
}

void Time:: putdata(){
    cout << "hours = " << h << endl;
    cout << "minutes =" << m << endl;
}

void Time:: sum(Time t1,Time t2){
    m=t1.m+t2.m;
    h=m/60+t1.h+t2.h;
    m=m%60;
}

int main(){
    Time t1,t2,t3;
    t1.getdata(3,40);
    t1.putdata();
    t2.getdata(4,30);
    t2.putdata();
    t3.sum(t1,t2);
    t3.putdata();

}