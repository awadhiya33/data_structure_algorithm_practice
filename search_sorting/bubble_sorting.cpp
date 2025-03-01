#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            cout<<"a";
            if(arr[j]>arr[j+1]){
                int tempt=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tempt;
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
}

int main(){
    int n=10;
    int arr[n]={1,2,3,4,10,6,7,8,9,10};
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}