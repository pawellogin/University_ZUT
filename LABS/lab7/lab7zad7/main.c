#include <stdio.h>
#include <stdlib.h>

void przepisanie(const int* a, int* b)
{
    *b=*a;
}

int main()
{
    const int a=5;
    int b=3;
    przepisanie(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
