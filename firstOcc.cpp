#include<iostream>
using namespace std;
int firstocc(int ar[],int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(ar[i]==key){
        return i;
    }
    return firstocc(ar,n,i+1,key);
}
int main(){
  
}