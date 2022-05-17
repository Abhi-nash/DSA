#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input size"<<endl;;
    cin>>n;
    cin.ignore();
    char ar[n+1];
    cout<<"input words"<<endl;
    cin.getline(ar,n); 
    cin.ignore();

    int curr_len=0;
    int max_len=0;
    
    for(int i=0;i<n;i++){
        if(ar[i] ==' '||ar[i]=='\0'){
            curr_len=0;
            if(curr_len > max_len){
                max_len=curr_len;
            }
        }
        else{
            curr_len++;
        }
      
    }
    cout<<max_len;
}