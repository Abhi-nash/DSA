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
//FOR PRINTING
void printList(Node* head){
   Node* curr=head;
   while(curr!=NULL){
       cout<<(curr->data)<<" ";
       curr=curr->next;
   }
};
Node* insert(Node* head,int x){
    Node* temp= new Node(x);
    temp->next=head;
    return temp;
};
int main(){
    Node* head= NULL;
    head=insert(head,30);
    head=insert(head,20);
    head=insert(head,10);
    printList(head);
}