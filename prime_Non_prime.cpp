#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int long n;
    cout << "please enter a number";
    cin >> n ;
    bool flag = 0;
    for (int long i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << "non prime";
            flag = 1;
            break;
        }

    }
    if (flag == 0)
    {
        cout << "prime number";
    }
    return 0;
    
    
}