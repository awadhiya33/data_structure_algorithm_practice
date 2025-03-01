#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
};
int main(){
    Node* head;
    head=NULL;
    Node* temp=new Node();
    temp->data=5;
    temp->link=NULL;
    head=temp;

    temp=new Node();
    temp->data=4;
    temp->link=NULL;
    //traverse
    Node* temp1=head;
    while(temp1->link!=NULL){
        temp1=temp1->link;
    }
    temp1->link=temp;
    while(head!=NULL){
        cout<<head->data;
        head=head->link;
    }

    return 0;
}
