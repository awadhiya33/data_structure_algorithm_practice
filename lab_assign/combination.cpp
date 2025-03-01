/*2) Write a program that, for all positive integers i, j, k and l from 1 through 100, finds and prints 
all combinations of i, j, k and l such that i + j + k = l and i < j < k < l.*/
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            for(int k=j+1;k<100;k++){
                for(int l=0;l<100;l++){
                    if(l==i+j+k){
                        cout << i <<"+" << j << "+" << k << "=" << l << endl;
                    }
                }
            }
        }
    }
}