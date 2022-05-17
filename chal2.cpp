#include<iostream>
using namespace std;
int sumof(int ar[],int n){
     int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           sum=ar[j]+sum;
           cout<<ar[j]<<endl;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<sumof(ar,n);
}
