#include<iostream>
using namespace std;
int sort(int ar[],int n){
  for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          if(ar[i]>ar[j]){
              int temp=ar[i];
              ar[i]=ar[j];
              ar[j]=temp;
          }
      }
  }
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
    sort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

}
