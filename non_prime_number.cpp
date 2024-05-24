#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int num;
    for (num = a;num < b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num%i==0)
            {
                cout << num <<endl;
                break;
            }     
        }   
    }
    return 0; 
}