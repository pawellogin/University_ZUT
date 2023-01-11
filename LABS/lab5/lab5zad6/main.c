#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    char wybor;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&tab[i]);
    }
    printf("czy koniec wprowadzania(t/n)");
    scanf(" %c",&wybor);
    if(wybor=='t')
    {
        return 0;
    }

    for(int i=5; i<10; i++)
    {
        scanf("%d",&tab[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(tab[i]>=0&&tab[i]<=10)
        {
            tab[i]++;
        }
        else
        {
            tab[i]+=5;
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("% d ",tab[9-i]);
    }

    return 0;
}
