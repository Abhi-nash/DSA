#include <iostream>
#include <string.h>
using namespace std;
string duplicate(string s){
    if(s.length()==0){
        return; //base case
    }
    char ch=s[0];
    string ans= duplicate(s.substr(1));
    if(ch==ans[0]){
        return ans;
    } return (ch+ans);

}
int main(){

}