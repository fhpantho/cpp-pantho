#include <iostream>
using namespace std;
int main(){
    int a;//declration the variable 
    float b;
    bool c;
    char d;

    a = 12; //assing the value
    cout<<"the size of INT is: "<<sizeof(a)<<endl;
    cout<<"the size of float is: "<<sizeof(b)<<endl;
    cout<<"the size of bool is: "<<sizeof(c)<<endl;
    cout<<"the size of charecter is: "<<sizeof(d)<<endl;

    short int si; 
    long int li; 
    cout<<"the size oF si is "<<sizeof(si)<<endl;
    cout<<"the size of li is "<<sizeof(li)<<endl;
    

    return 0;
}
