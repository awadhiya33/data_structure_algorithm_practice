/*1) Write a program to implement the following tasks,
 Compare two given strings,
 Concatenate two given strings, without using standard library functions.
 Whether a given string is palindrome or not (Without using standard library functions.)*/
#include<iostream>
using namespace std;
void compare(string a,string b){
    if(a==b){
        cout << a << " is equal to " << b << endl;
    }
    else if (a>b){
        cout << a << " is greater than " << b << endl;
    }
    else{
        cout << a << " is less than " << b << endl;
    }
}

void concatenate(string a,string b){
    string c=a+b;
    cout << "after concatenate : " << c << endl;
}

void palindrome(string a){
    int count=0;
    for(int i=0;i<a.length()/2;i++){
        if(a[i]!=a[a.length()-i-1]){
        cout << a << " is not a palindrome" << endl;
        count++;
        }
    }if(count==0){
        cout << a << " is a palindrome" << endl;
    }
    
}

int main(){
    string a,b;
    cout << "enter two given strings" <<endl;
    cin >> a >> b;
    compare(a,b);
    concatenate(a,b);
    palindrome(a);

}