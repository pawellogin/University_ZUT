#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0;
    int liczba=0;
    int ujemne=0;
    int poprzednia=1;

    while(suma<100 && ujemne<10 && poprzednia!=liczba)
    {
        printf("podaj liczbe\n");
        poprzednia=liczba;
        scanf("%d",&liczba);
        suma+=liczba;
        if(liczba<0)
        {
            ujemne++;
        }
    }

    return 0;
}
