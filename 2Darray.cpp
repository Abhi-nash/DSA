#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows" << endl;
    cin >> n;
    int m;
    cout << "enter number of coloumns" << endl;
    cin >> m;
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    // for printing the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    // finding the element
    int x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == x)
            {
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }
}