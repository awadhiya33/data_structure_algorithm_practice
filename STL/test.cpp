#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin>>testCase;
	for(int i=0;i<testCase;i++){
	    int a,b;
	    cin>>a>>b;
	    int minA=a/9,minB=b/9;
	    if(a%9!=0){
	        minA++;
	    }
	    if(b%9!=0){
	        minB++;
	    }
	    if(minA<minB){
	        cout<<"0 "<<minA<<endl;
	    }else{
	        cout<<"1 "<<minB<<endl;
	    }
	}
	return 0;
}