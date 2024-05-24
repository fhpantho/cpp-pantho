#include <iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int savings;
    cin >> savings;
    if (savings>5000)
    {
        cout << "go to kangna";
    }
    else if (savings<4000)
    {
        cout << "go with malenga";
    }
    else if (savings<2000)
    {
        cout << "do nothing";
    }
    
    
    
}