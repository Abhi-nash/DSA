#include <iostream>
using namespace std;
int power(int n, int a){
     if(a==0){
         return 1;
     }
    int prev= power(n, (a-1));
    return n*prev;
}
int main(){
  int n;
  int a;
  cin>>n;
  cin>>a;
  cout<<power(n,a);
}