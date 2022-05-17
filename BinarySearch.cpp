#include<iostream>
using namespace std;

int BinarySearch(int ar[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid;
        mid=(s+e)/2;
        if(ar[mid]==key){
            return mid;
        }
        if(ar[mid]<key){
            s=ar[mid+1];
        }
        if(ar[mid]>key){
            e=ar[mid-1];
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
    cout<<BinarySearch(ar,n,key);

}
