#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head;
void insert(int value,int pos){
    Node* temp=new Node();
    temp->data=value;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
   }
   else{
    Node* temp1=head;
    for(int i=1;i<pos-1;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
   }
}
void delet(int y){
    Node* tempt=head;
    if(y==1){
        head=tempt->next;
        delete(tempt);
    }

    for(int i=1;i<y-1;i++){
        tempt=tempt->next;
    }
    //Node* tempt1=tempt->next;
    tempt->next=tempt->next->next;
    delete(tempt->next);
}
void reverse(){
    Node *current,*prev,*next;
    current=head;
    prev = NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
void print(){
    Node* tem=head;
    cout<< "list is : ";
    while(tem!=NULL){
        cout<<tem->data<<" ";
        tem=tem->next;
    }
}
int main(){
    head=NULL;
    int x,value,pos,y;
    do{
    cout <<"enter 1 to insert 2 to delete 3 to reverse 4 to EXIT :\n";
    cin>>x;
    switch (x)
    {
    case 1: cout<<"enter data and position\n";
            cin>>value>>pos;
            insert(value,pos);
            print();
        break;
    case 2: cout<<"enter position to delete\n";
            cin>>y;
            delet(y);
            print();
    case 3: reverse();
            cout<<"after reversing:\n";
            print();
    
    default:
        break;
    }

}while(x!=4);
}