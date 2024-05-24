#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n,limit;
    cin >>n>>limit;
    int array[n];
    int size = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < array[limit]; i++)
    {
        size = size + 1;
    }
    cout << size<<endl;

    return 0;
    
    
}