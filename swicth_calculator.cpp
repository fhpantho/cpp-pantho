#include <iostream>
using namespace std;
int main()
{
    float a;
    float b;
    char oparator;
    cout << "pleas enter a number: ";
    cin >> a;
    cout << "please enter another number: ";
    cin >> b;
    cout << "pleas say what do want to do: ";
    cin >> oparator;
    switch (oparator)
    {
    case 'addition':
        float result;
        result = a + b;
        cout << "the result is: " << result <<endl;
        break;
    case '+':
        float result;
        result = a + b;
        cout << "the result is: " << result <<endl;
        break;
    case 'add':
        float result;
        result = a + b;
        cout << "the result is: " << result <<endl;
        break;
    case 'plus':
        float result;
        result = a + b;
        cout << "the result is: " << result <<endl;
        break;
    case '-':
        float result;
        result = a - b;
        cout << "the result is: " << result <<endl;
        break;
    case 'minus':
        float result;
        result = a - b;
        cout << "the result is: " << result <<endl;
        break;
    case 'substracsion':
        float result;
        result = a - b;
        cout << "the result is: " << result <<endl;
        break;
    case 'diviion':
        float result;
        result = a / b;
        cout << "the result is: " << result <<endl;
        break;
    case 'div':
        float result;
        result = a / b;
        cout << "the result is: " << result <<endl;
        break;
    case '/':
        float result;
        result = a / b;
        cout << "the result is: " << result <<endl;
        break;
    case 'isto':
        float result;
        result = a * b;
        cout << "the result is: " << result <<endl;
        break;
    case '*':
        float result;
        result = a * b;
        cout << "the result is: " << result <<endl;
        break;
    default:
        cout << "i am still learnig i cant do this operation at this time" << endl;
        break;
    }

}