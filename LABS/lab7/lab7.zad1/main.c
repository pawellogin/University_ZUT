#include <stdio.h>
#include <stdlib.h>

int* mniejsza(int* a,int* b)
{
    if(*a<=*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}

int main()
{
    int a=9,b=7,wynik=0;
    int* pa=&a;
    int* pb=&b;
    wynik=mniejsza(pa,pb);
    printf("%d",wynik);
    return 0;
}
