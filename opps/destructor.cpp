#include<iostream>
using namespace std;
#define pi cout
class Test{
    static int count;
    public :
    Test (){
        count++;
        pi << count << "object created"<<endl;
    }
    ~Test(){
        cout << count<< "object destroyed" <<endl;
        count--;
    }
};
int Test:: count=0;
int main(){
    cout << "main block" <<endl;
    Test t1;
    {
        cout <<"sub block" << endl;
        Test t2,t3;
        cout << "exit from sub block" << endl;
    }  
    cout << "exit from main" << endl;  
}
