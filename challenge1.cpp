#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int maximum(int ar[], int n){
    int max=INT_MIN;
    for(int i=0; i<n;i++){
        if (ar[i]>max)
        {
            max=ar[i];
        }
        
    }return max;
}
//alternate code
// int maximum(int ar[],int n){
//     int mx=INT_MIN;
//     for(int i=0; i<n;i++){
//         mx=max(ar[i],mx);
//     }
//     return mx;
// }

int main(){
    cout<<"enter size of array"<<endl;
    int n;
    cin>>n;
    int ar[n];
    cout<<"enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"maximum is :"<<endl;
    cout<<maximum(ar,n);
}