#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter the Button"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
    cout<<"hello"<<endl;
    break;

    case 'b':
    cout<<"namaste"<<endl;
      
        
        break;
    
    default:
    cout<<"more to come"<<endl;
        break;
    }
}