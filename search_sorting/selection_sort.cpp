#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int swap=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=swap;
    }
}

int main(){
    int n=10;
    int arr[n]={2,4,3,6,4,8,7,9,1,4};
    selection_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}