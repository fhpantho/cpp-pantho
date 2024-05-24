#include <iostream>
using namespace std;
int main()
{
    int date;
    for (date = 0; date <= 30; date++)
    {
        if (date%2==0)
        {
            continue;
        }
        cout << "neha can go: " << date  << endl;
    }
    
}