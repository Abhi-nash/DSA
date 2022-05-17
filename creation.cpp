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
int main(){
    Node* head= new Node(10);
    head->next= new Node(20);
    head-> next-> next= new Node(30);
    printList(head);
}