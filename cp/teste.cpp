#include <iostream>
using namespace std;

int fact(int a){

}

void fun(){
   int a,b;
   cin>>a>>b;
    while(a<=b){
        a=a+fact(a);
        if(a==b){
            cout<<"true"<<endl;
        }
    }
}







int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int x=0;x<t;x++){
	    fun();
	}
	return 0;
}