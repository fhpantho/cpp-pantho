#include <iostream>
#include <cmath>

using namespace std; 

int main()

{
    int n, reverse;

    cout << "please enter a number to reverse it: ";
    cin >> n;

    reverse = 0;

    while (n>0)
    {
        int last_digit = n%10;
        reverse = reverse*10 + last_digit;
        n = n/10;
    }

    cout << reverse;
    
}