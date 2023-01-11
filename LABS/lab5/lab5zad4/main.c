#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10]= {1,2,3,4,5,6,7,8,9,0};
    int tab2[10]= {};
    for(int i=0; i<10; i++)
    {
        tab2[i]=tab[9-i];
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",tab[i]);
    }

    printf("\n");

    for(int i=0; i<10; i++)
    {
        printf("%d ",tab2[i]);
    }
    return 0;
}
