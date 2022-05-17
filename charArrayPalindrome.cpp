#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ar[n+1];
    cin>>ar;
    bool flag=1;
    for(int i=0;i<n;i++){
        if(ar[i]!=ar[n-1-i]){
            flag =0;
            break;
        }
    }
    if(flag==1){
        cout<<"it is a panidrome";
    }
    else{
        cout<<"nope";
    }
}