#include <iostream>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] <<endl;
    }
    

    

    return 0;
}