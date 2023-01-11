#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1; i<11; i++)
    {
        printf("%4d",i);
        for(int j=1; j<11; j++)
        {
            printf("%4d",j*i);
        }
        printf("\n");
    }
    return 0;
}
