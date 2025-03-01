/*Write a program to find the largest and second largest from a set of numbers.*/
 

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,tempt;
    float sum=0,sd=0,d=0;
    cout << "enter the no of element" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the element of array" << endl;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                tempt=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tempt;
            }
        }    
    }
    cout << "max :" << arr[n-1] << endl;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            cout << "2nd max :" << arr[i] << endl;
            break;
        }
    }
}    