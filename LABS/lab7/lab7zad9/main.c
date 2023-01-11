#include <stdio.h>
#include <stdlib.h>

int suma(const int*a,const int* b)
{
    return *a+*b;
}
int main()
{
    int temp=7;
    int temp1=3;
    const int* a=&temp;
    const int* b=&temp1;

    printf("%d",suma(a,b));

    return 0;
}
