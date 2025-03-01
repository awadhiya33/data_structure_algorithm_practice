#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node* next;
};
node* head=NULL;

// void insert(int value){ //insertion at begining
//    node* temp=new node();
//    temp->data=value;
//    temp->next=NULL;
//    if(head==NULL){
//       head=temp;
//    }else{
//       temp->next=head;
//       head=temp;
//    }
// }

void insert(int value,int pos){
   node* temp=new node();
   temp->data=value;
   temp->next=NULL;
   if(pos==1){
      temp->next=head;
      head=temp;
   }else{
      node* temp1 =head;
   for(int i=1;i<pos-1;i++){
      temp1=temp1->next;
   }
   temp->next=temp1->next;
   temp1->next=temp;
}
   }
// void reverse(node* head){ //reverse print
//    if(head==NULL){
//       return;
//    }
//    reverse(head->next);
//    cout<<head->data;
// }

void reverse(){
   node* current=head;
   node* prev=NULL;
   node* next=NULL;
   while(current){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
   }
   head=prev;
}

void sort(){
   node* ptr;
   node* ctr;
   ptr=head;

   while(ptr){
      ctr=ptr->next;
      while(ctr){
         if(ptr->data>ctr->data){
            int tempt=ptr->data;
            ptr->data=ctr->data;
            ctr->data=tempt;
         }
         ctr=ctr->next;
      }
      ptr=ptr->next;
   }
}





int main(){
   insert(2,1);
   insert(5,1);
   insert(7,2);
   reverse();
   sort();
   while(head){
      cout<<head->data;
      head=head->next;
   }
      return 0;
} 