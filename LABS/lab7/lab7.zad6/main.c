#include <stdio.h>
#include <stdlib.h>

int* rezerwacja(int n)
{
    int* p=(int*)malloc(sizeof(int)*n);
    return p;
}

int main()
{
    int* wynik=rezerwacja(4);
    printf("%p",wynik);

    return 0;
}
