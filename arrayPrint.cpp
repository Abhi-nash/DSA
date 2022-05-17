#include<iostream>
using namespace std;
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
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";

    }
}