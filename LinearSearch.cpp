#include<iostream>
using namespace std;

int LinearSearch(int ar[],int n,int kenny){
    for(int i=0;i<n;i++){
        if(ar[i]==kenny){
            return i;
        }
    }
    return -1;
}
int main()
{   
    cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    int ar[n];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
  
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<LinearSearch(ar,n,key);

}
