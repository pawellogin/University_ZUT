#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0;
    int liczba=0;
    while(suma<100)
    {
        printf("podaj liczbe\n");
        scanf("%d",&liczba);
        suma+=liczba;
    }
    printf("%d",suma);
    return 0;
}
