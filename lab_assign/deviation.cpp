/*Write a program to find the max, min, average, standard deviation of the elements of an
integer array. (menu driven)*/
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
    cout << "min :" << arr[0] << endl;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    cout << "average :" << sum/n <<endl;
    for(int i=0;i<n;i++){
        d =d+(arr[i]-sum/n)*(arr[i]-sum/n);
    }
    sd=sqrt(d/n);
    cout << "standard deviation :" << sd << endl;
}