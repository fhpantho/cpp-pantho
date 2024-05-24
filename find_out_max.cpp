#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "input the first number: ";
    cin >> a;
    cout << "input the 2nd number: ";
    cin >> b;
    cout << "input the 3rd number: ";
    cin >> c;
    if (a>b)
    {
        if (a>c)
        {
            cout << "the bigest number is" << a << endl;
            if (b>c)
            {
                cout << "the 2nd bigest number is" << b << endl;
                cout << "the smalest number is" << c << endl;
            }
            else
            {
                cout << "the 2nd bigest number is" << c << endl;
                cout << "the smalesst number is" << b << endl;
            }
            
            
        }
        if (a<c)
        {
            cout << "the bigest number is " << c <<endl;
            cout << "the 2nd bigest number is " << a <<endl;
            cout << "the 3rd bigest number is" << b << endl;
        }
        
        
        
    }
    else if (a<b)
    {
        if (b>c)
        {
            cout << "the bigest number is " << b <<endl;
            if (a>c)
            {
                cout << "the 2nd bigest number is" << a << endl;
                cout << "the smalest number is" << c << endl;
            }
            else{
                cout << "the 2nd bigest number is" << c << endl;
                cout << "the smalest number is" << a << endl;
            }
            
            
        }
        else if (b<c)
        {
            cout << "the bigest number is " << c <<endl;
            cout << "the 2nd bigest number is " << b <<endl;
            cout << "the 3rd bigest number is" << a << endl;
        }
        
        
    }
    else if (c>a)
    {
        if (c>b)
        {
            cout << "the bigest number is " << c <<endl;
            if (a>b)
            {
                cout << "the 2nd bigest number is" << a << endl;
                cout << "the smalest number is" << b << endl;
            }
            else
            {
                cout << "the 2nd bigest number is" << b << endl;
                cout << "the smalest number is" << a << endl;
            }
            
        }
        else
        {
            cout << "the bigest number is " << b <<endl;
            cout << "the 2nd bigest number is " << c <<endl;
            cout << "the 3rd bigest number is" << a << endl;

        }
        
    }
    
    
    
    
    
}