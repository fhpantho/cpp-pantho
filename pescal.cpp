#include <iostream>
#include <math.h>
using namespace std;
int fact(int n){
    int factorial = 1;
    for (int i = 2 ; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
    
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int facto = fact(i)/(fact(j) * fact(i-j));
            cout << facto <<" ";
        }
        cout << endl;
        
    }
    return 0;
    
}