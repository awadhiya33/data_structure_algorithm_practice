#include<iostream>
#include<cmath>
using namespace std;
void posand(int arr[]){
int n,check=0;
        cin>>n;
        int j=0;
        if(n<=1){
            cout<<1<<endl;
            return;
        }
        while(pow(2,j)<=n){
            if(pow(2,j)==n){
                cout<<-1<<endl;
                check=-1;
                break;
            }
            j++;
        }
        if(check==-1){
            return;
        }
        for(j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
}

int main(){
    int t,j=2;
    cin>>t;
    int arr[100000];
    arr[0]=2;
    arr[2]=1;
    arr[1]=3;
    for(int i=3;i<100000;i++){
        arr[i]=i+1;
        if(i==pow(2,j)){
            int tempt=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=tempt;
            j++;
        }
    }   
    for(int i=0;i<t;i++){
        posand(arr);
    }
    return 0;
}