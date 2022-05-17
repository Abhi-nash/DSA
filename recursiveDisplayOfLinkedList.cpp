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
//FOR RECCURSIVE PRINTING
void rprint(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rprint(head->next);
};
int main(){
    Node* head= new Node(10);
    head->next= new Node(20);
    head-> next-> next= new Node(30);
    rprint(head);
}