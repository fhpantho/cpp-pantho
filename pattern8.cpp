#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << " please enter row: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        { 
            cout << "*  ";
        }
        int space = row * 2 - i * 2;
        for (int j = 1; j <= space; j++)
        {
            cout << "   ";
        }
         for(int j = 1; j <= i; j++)
        { 
            cout << "*  ";
        }
        cout << endl;
        
    }
    for (int i = row; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        { 
            cout << "*  ";
        }
        int space = row * 2 - i * 2;
        for (int j = 1; j <= space; j++)
        {
            cout << "   ";
        }
         for(int j = 1; j <= i; j++)
        { 
            cout << "*  ";
        }
        cout << endl;
        
    }
    
}