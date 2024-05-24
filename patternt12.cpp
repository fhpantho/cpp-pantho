#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter row: ";
    cin >> row;
    
    for (int i = 1; i <= row; i++)
    {
        int n = 1;
        
        for(int j = 1; j <= (row - i); j++)
        {
            cout << "   ";
        }
        for(int j = 1; j <= 1 + ((i - 1) * 2); j++)
        {  
            if (j % 2 == 0)
            {
                cout << "   ";
                n--;
            }
            else
            {
                cout << n << "  ";
                
                
            }
            
            n++;
        }
        cout << endl;
    }
    return 0;
    
}