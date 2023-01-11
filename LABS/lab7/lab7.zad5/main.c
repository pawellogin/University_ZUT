#include <stdio.h>
#include <stdlib.h>

int* rezerwacja()
{
    int* p;
    p=(int*)malloc(sizeof(int));
    return p;
}

int main()
{
    int* p=rezerwacja();
    printf("%p",p);
    return 0;
}
