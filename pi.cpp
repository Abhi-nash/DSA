#include <iostream>
#include <string.h>
using namespace std;
void ok(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << 3.14;
        ok(s.substr(2));
    }
    else
    {
        cout << s[0];
        ok(s.substr(1));
    }
}
int main()
{
    string s;
    cin >> s;
    ok(s);
    return 0;
}