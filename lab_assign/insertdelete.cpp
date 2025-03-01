/*2) Write a program to insert and delete an element (given by the user) into an array in a
particular position (given by the user)
*/
#include<iostream>
using namespace std;

void insert(int arr[],int i,int no,int n){
    for(int j=n-1;j>=i-1;j--){
        arr[j+1]=arr[j];
    }
    arr[i-1]=no;
    for(int j=0;j<n+1;j++){
        cout <<arr[j];
    }
   
}
void deletearr(int arr[],int i,int n){
    for(int j=i-1;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    for(int j=0;j<n-1;j++){
        cout <<arr[j];
    }
}

int main(){
    int n,ch,i,no;
    cout << "enter no of element\n";
    cin >> n;
    int arr[100];
    cout << "enter elements of array\n";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << "enter : 1 to insert 2 to delete" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1: cout << "enter position and element to insert" <<endl;
            cin >> i >> no;
        insert(arr,i,no,n);
            
        break;
    case 2: cout << "enter position to delete" <<endl;
            cin >> i;
            deletearr(arr,i,n);
            
        break;
    default:
        break;
    }

}