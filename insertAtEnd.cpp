#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
   Node(int val){
       data=val;
       next=NULL;
   }
};

//Printing
void printList(Node*head){
    Node* curr= head;
    while(curr!=NULL){
    cout<<(curr->data)<<" ";
     curr=curr->next;
    }
};
//insert at the end
Node* insertEnd(Node* head, int x){
    Node* temp= new Node(x);
    if(head==NULL){
        return temp;
    }
    Node* curr=head;
    while(curr!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
};
int main(){
    Node* head= new Node(10);
    insertEnd(head,20);
    insertEnd(head,30);
 printList(head);
}