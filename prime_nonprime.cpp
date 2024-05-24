#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i;
    cout << "please enter a number to check if it is prime or non-prime: ";
    cin >> n;
    bool flag = 0;


    for (i = 2; i <= sqrt(n); i++)
    {
        if (n%2==0)
        {
            cout << "it is a non prime number";
            flag = 1;
            break;
        }

        else if (flag == 0)
        {
            cout << "it is a prime number";
        }
        
        
    }
    
}