#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int Max = INT_MIN;
    int Min = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
       Max = max(Max, array[i]);
       Min = min(Min, array[i]);
        
        
    }
    
    cout << Max <<" "<< Min << endl;
    return 0;
    
}