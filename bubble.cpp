#include<iostream>
using namespace std;
int bubble(int ar[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-1;i++){
            if(ar[i]>ar[i+1]){
                int temp;
                temp=ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        } 
        counter++;
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
       cin>>ar[i];
    }
    bubble(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

}