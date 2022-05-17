#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    bool flag=true;
    while(flag){
    int temp;
    temp=b;
    b=a%b;
    a=temp;
    if(a%b==0){
        flag=false;
    }
    }
    cout<<b;
 
}