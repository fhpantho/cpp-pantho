#include <iostream>
#include <math.h>
using namespace std;

void fib(int n){
    int t1,t2;
    t1 = 0;
    t2 = 1;
    int nextturm;
    for(int i = 1; i <= n; i++){
        nextturm = t1 + t2;
        cout << t1 <<endl;
        t1 = t2;
        t2 = nextturm;
    }
    return;
}

int main(){
    int n;
    cout << "please enter the limit: ";
    cin >> n;
    fib(n);
    return 0;
}