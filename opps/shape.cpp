#include<bits/stdc++.h>
using namespace std;
class shape{
    protected:
    void print(){
        cout<<" This is a shape";
    }
};
class polygon : shape{
    public:
    void print(){
        cout<<" Polygon is a shape";
    }
};
int main(){

    polygon p;
    p.print();
    return 0;
}