#include<iostream>
using namespace std;
int Rb(int ar[],int n){
    int curr;
    int mx=-100000;
    int count;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>mx && ar[i]>ar[i+1])
        {
           count+=1;
        }
        mx=max(mx,ar[i]);
    }
    cout<<count;   
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<Rb(ar,n);
}