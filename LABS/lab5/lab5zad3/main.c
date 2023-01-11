#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba[5];
    int mniejsze=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&liczba[i]);
        if(liczba[i]<0)
        {
            mniejsze++;
        }
    }
    printf("\n%d\n\n",mniejsze);

    for(int i=0; i<5; i++)
    {
        printf("%2d",liczba[i]);
    }
    printf("\n\n");
    for(int i=0; i<5; i++)
    {
        printf("%2d",liczba[4-i]);
    }
    return 0;
}
