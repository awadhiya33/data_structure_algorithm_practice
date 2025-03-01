#include<iostream>
using namespace std;
class student{
    int roll;
    public :
    void getroll(int x){
        roll=x;
    }
    void putroll(){
        cout << "roll no = " << roll <<endl;
    }

};
class test : public student{
    protected :
    float f1,f2;
    public :
    void getmarks(float x,float y){
        f1=x;
        f2=y;
    }
    void putmarks(){
        cout << "marks obtained : " <<"\ntest 1 :" << f1 <<"\ntest 2 :" <<f2<<endl;
    }
};
class sport{
    protected:
    float sp;
    public:
    void getsp(float x){
        sp=x;
    }
    void putsp(){
        cout << "sport score = " << sp << endl;
    }
};
class result : public test,public sport{
    float total;
    public:
    void disp(){
        total=f1+f2+sp;
        putroll();
        putmarks();
        putsp();
        cout << "Total = " << total <<endl;
    }
};
int main(){
    result obj;
    obj.getroll(1854008);
    obj.getmarks(90.5,96.8);
    obj.getsp(88.2);
    obj.disp();
}
