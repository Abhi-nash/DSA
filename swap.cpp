#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *aptr=&a;
    int *bptr=&b;
    swap(*aptr,*bptr);
    cout<<a<<endl<<b;
}