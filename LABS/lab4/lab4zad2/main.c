#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[4];
    int suma=0;
    //int i=0;
    for(int i=0; i<4; i++)
    {
        scanf("%d",&tablica[i]);
    }
    for(int i=0; i<4; i++)
    {
        printf("wartosc %d = %d, znajduje sie w komurce %d \n pod adresem %p",i+1,tablica[i],i,&tablica[i]);
        suma+=tablica[i];
    }
    printf("suma wszystkich wartosci to = %d ",suma);
    return 0;
}
