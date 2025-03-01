#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* prev;
    node* next;
};
node* head=NULL;

void insert(int value){
    node* temp=new node();
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }else{
        head->prev=temp;
        temp->next=head;
        head=temp;
    }
}

void deletex(int pos){
    node* temp=head;
    node* ptr;
    if(head==NULL){
        cout<<"cannot deleted";
    }
    if(pos==1){
        head=temp->next;
    }else{

    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    ptr=temp->next;
    if(ptr->next==NULL){
        temp->next=NULL;
    }else{
        temp->next=ptr->next;
        ptr->next->prev=temp;
        cout<<"deleted";
    }
    
    }
    
   
}

int main(){
    insert(5);
    insert(2);
    insert(3);
    insert(1);
    deletex(1);
    node* tempt=head;
    while(tempt){
        cout<<tempt->data;
        tempt=tempt->next; 
    }
}