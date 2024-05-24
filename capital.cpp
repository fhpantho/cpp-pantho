#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array1;
    
    getline(cin, array1);
    for (int i = 0;  array1[i] !='\0'; i++)
    {
       
            if (array1[i] >= 'A' && array1[i] <= 'Z')
            {
                array1[i] = array1[i] + 32;
            }
            else if(array1[i] >= 'a' && array1[i] <= 'z')
            {
                array1[i] = array1[i] - 32;
            }
            
    }

    for (int i = 0; array1[i] != '\0'; i++)
    {
        cout << array1[i];
    }

    return 0;
}