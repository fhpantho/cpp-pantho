#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "please enter the number of row: ";
    cin >> row;
    cout << "please enter the number of colunm: ";
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int  j = 1; j <= col; j++)
        {
            cout << "*  ";
        }
        cout <<endl;
        
    }
    return 0;
    
}