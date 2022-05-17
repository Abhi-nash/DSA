#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
//printing
Node* print(Node* head){
    Node* curr= head;
    if(head==NULL){
        return NULL;
    }
    cout<<curr->data<<" ";
    while(curr->next!=head){
        curr=curr->next;
        cout<<(curr->data)<<" ";
    }
}
//insert at the beginning
Node* insert(Node* head, int x){
    Node* temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    // else{
    //     Node* curr=head;
    //     while(curr->next!=head){
    //         curr=curr->next;
    //     }
    //     curr->next=temp;
    //     temp->next=head;
    // }//naive method
    else{
        temp->next=head->next;
        head ->next=temp;
        int t= head->data;
        head->data=temp->data;
        temp->data= t;    // the data has been swapped between head node and the
        //inserted node

    }
    return head;
}
//insert at the end 
  Node* end(Node*head,int x){
      Node* temp= new Node(x);
      if(head==NULL){
          temp->next=temp;
          return temp;
          }
      
     else { 
        temp->next=head->next;
        head->next=temp;
        int t =head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
        
    //   while(curr->next!=head){
    //       curr=curr->next;
    //   }
    //   curr->next = temp;
    //   temp->next=head;
    //  }
    //  return head;
  }//naive solution theta n run time
  
  }
  //delete head 
  Node* delHead(Node* head){
      if (head==NULL)return NULL;
      if(head->next==head){
          delete head;
          return NULL;
      }
      Node* curr=head;

      while(curr->next!=head){
          curr=curr->next;
      }
      curr->next=head->next;
      delete head;
      return curr->next;
  }
  //delete K th element 
 Node* delK(Node* head, int x){
     Node* curr=head;
     for(int i=1;i<x;i++){
         curr=curr->next;
     }
     curr->next=curr->next->next;
 }
int main(){
 Node* head= new Node(10);
 Node* temp1=new Node(20);
 Node* temp2=new Node(30);

 head->next=temp1;
 temp1->next=temp2;
 temp2->next=head;
 delHead(head);
 print(head);
 return 0;
}