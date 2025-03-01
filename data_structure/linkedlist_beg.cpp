#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head;
void insert(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL){
        temp->next=head;
    }
    head=temp;
}
void print(){
    Node* temp=head;
    cout<< "list is : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    int x,n;
    cout<<"How many number? : \n";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"enter the no you want to insert : \n";
        cin>>x;
        insert(x);
        print();

    }



}