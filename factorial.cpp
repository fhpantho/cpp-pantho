#include <iostream>
#include <math.h>
using namespace std;

int fact(int n){
    int factorial=1;
    for (int i = 2; i<=n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    int sum = fact(n);
    cout<< sum << endl;
    return 0;
}