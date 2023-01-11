#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wynik=0;

    do
    {
        scanf("%d",&wynik);

    }while((wynik<0)||(wynik>100));
    if(wynik>50)
    {
        printf("zdales egzamin");
    }
    else printf("nie zdales ");
    return 0;
}
