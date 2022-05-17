#include<iostream>
using namespace std;
int main()
{
   double a,b,sol;
   cout<<"ETH: "<<endl;
   cin>>a;
   cout<<"KuCoinPrice: "<<endl;
   cin>>b;
   sol=(a*1725+60)/b;
   cout<<"Result: "<<sol;
  
    return 0;
}