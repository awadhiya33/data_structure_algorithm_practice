/*Squareof12is144.21,whichisthereverseof12hasasquare441,whichissameasthe reverse of 144. Write a program to find out 
all such numbers/pairs in the range of 10 to 100.*/
#include<iostream>
using namespace std;
int main(){
    int r,a,rev,p,q,b,n;
    for(int i=10;i<1000;i++){
        a=i*i;
        n=i;
        rev=0;
        while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
        }
        b=rev*rev;
        q=0;
        while(b!=0){
            p=b%10;
            q=q*10+p;
            b=b/10;
        }

        if(a==q){
           cout << i <<" " << rev << endl;
        }
    }
}