#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0,obw=0;
    printf("podaj boki prostok¹ta\n");
    scanf("%d%d",&a,&b);
    printf("pole prostokata to = %d\n",a*b);
    obw=2*a+2*b;
    printf("obwod prostokata to = %d\n",obw);
    return 0;
}
