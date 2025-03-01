#include<bits/stdc++.h>
using namespace std;

void merge_arr(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;

    int n2=r-m;

    int left[n1],right[n2];
    for(i=0;i<n1;i++){
        left[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        right[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }else{
            arr[k]=right[j];
            j++;
            k++;

        }
    }
    while(i<n1){
            arr[k]=left[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k]=right[j];
            j++;
            k++;
        }

}

void merge_sort(int arr[],int l,int r){
    if(l<r){
            int m=l+(r-l) /2;
            merge_sort(arr,l,m);
            merge_sort(arr,m+1,r);
            merge_arr(arr,l,m,r);
    }

}

int main(){
    int arr[]={3,4,98,9,7};
    int l=0;
    int r=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,l,r-1);
    for(int i=0;i<r;i++){
        cout<<arr[i];
    }
    return 0;
} 