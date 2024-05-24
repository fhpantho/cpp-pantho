#include <iostream>
using namespace std;

int Decimal_to_Binarry(int n)
{
    int ans = 0;
    int x = 1;
    while (x <= n)
    {
        x = x * 2;    
    }
    x = x / 2;
    while (x > 0)
    {
        int lastdigit = n/x;
    }
    
    
    
    
    
}

int main()
{
    int n;
    cin >> n;

    cout << Decimal_to_Binarry(n)<<endl;

    return 0;
}