#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "enter the initial number: ";
    cin >> a;
    cout << "enter the final number: ";
    cin >> b;
    int num;
    for(num = a; num < b; num++)
    {
        int number;
        for (number = 2; number<num; number++)
        {
            if (num%number==0)
            {
                break;
            }
            
            
        }
        if (num == number)
        {
            cout << num << endl;
        }
        
        
    }
    return 0;
}
