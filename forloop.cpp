#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    for ( int counter = 0; counter < n; counter = counter + 5 )
    {
        cout << n << endl;
        n = n + counter;

    }
    return 0;
    
}