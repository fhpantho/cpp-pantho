#include <iostream>
#include<math.h>
using namespace std; 
int main()
{
    int n, sum, orgN; 
    cout << " please enter a number: ";
    cin >> n;
    sum = 0;
    orgN = n;
    while (n > 0)   
    {
        int last_digit = n%10;
        sum = sum + pow(last_digit, 3);
        n = n/10;

    }
    if (sum == orgN)
    {
        cout << "this is an armstrong number";
    }
    else{
        cout << "this is a nonarmstrong number";
    }
    
}