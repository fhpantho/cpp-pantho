#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "please enter a number to check is it prime or non prime: " << endl;
    cin >> n;
    int number;
    for (number = 2; number<n; number++ )
    {
        if (n%number==0)
        {
            cout << "it is a non prime number" << endl;
            break;
        }
        
    }
    if (n == number)
    {
        cout << "it is a prime number" << endl;
    }
    

    
}