#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows"<<endl;
    cin>>n;
    int m=n;
    int ar[n][m];
    cout<<"enter ur elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            int temp;
            temp=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ar[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}