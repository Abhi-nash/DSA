#include<iostream>
using namespace std;
int main()
{
  float n1,n2;
  cout<<"input two numbers"<<endl;
  cin>>n1>>n2;
  char op;
  cout<<"input operator"<<endl;
  cin>>op;
  
  switch (op)
  {
  case '+':
    cout<<n1+n2<<endl;
      break;
       case '-':
    cout<<n1-n2<<endl;
      break;
       case '*':
    cout<<n1*n2<<endl;
      break;
       case '/':
    cout<<n1/n2<<endl;
      break;
  
  default:
  cout<<"enter valid operator"<<endl;
      break;
  }
}