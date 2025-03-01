/*1) Fibonacci sequence is represented by 0, 1, 1, 2, 3, 5, 8, 13, 21...Construct a formula to represent the i-th term in 
the series and use it to write a program to print the first n terms of the Fibonacci sequence, where n is taken 
as input. NB: f(0) = 0, f(1) = 1.*/

#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n,n3;
    cout << "enter the no of term";
    cin >> n;
    if(n==1){
        cout << n1;
    }
    else if(n==2){
        cout <<n1 <<endl <<n2;
    }
    else{
        cout <<n1 <<endl <<n2 <<endl;
        for(int i=2;i<n;i++){
            n3=n1+n2;
            cout << n3 <<endl;
            n1=n2;
            n2=n3;
        }
    }
}