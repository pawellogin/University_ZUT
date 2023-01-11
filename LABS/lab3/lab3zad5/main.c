#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    printf("podaj liczbe\n");
    scanf("%d",&a);
    if((a%2)==0)
        printf("liczba jest pazysta");
    else
        printf("liczba jest niepazysta");

    return 0;
}
