#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
 int a=3,b=7;
 zamiana(&a,&b);
 printf("%d %d",a,b);

    return 0;
}
