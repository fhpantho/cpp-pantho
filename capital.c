#include <stdio.h>
#include <string.h>


int main()
{
    char ARR[100];
    fgets(ARR, 100, stdin);
    for (int i = 0; ARR[i] != '\0'; i++)
    {
        if (ARR[i] >= 'A' && ARR[i] <= 'Z')
        {
            ARR[i] = ARR[i] + 32;
        }
        else if (ARR[i] >= 'a' && ARR[i] <= 'z')
        {
            ARR[i] = ARR[i] - 32;
        }
    }

    for (int i = 0; ARR[i] != '\0'; i++)
    {
        printf("%c", ARR[i]);
    }

    return 0;
}