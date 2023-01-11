#include <stdio.h>
#include <stdlib.h>

void zamiana(int* a,int* b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

int main()
{
    int a=4,b=7;
    int* pa=&a;
    int* pb=&b;

    zamiana(pa,pb);
    printf("%d %d",*pa,*pb);
    return 0;
}
