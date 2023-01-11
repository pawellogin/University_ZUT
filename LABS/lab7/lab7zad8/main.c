#include <stdio.h>
#include <stdlib.h>

void przepisanie(const int** a, int** const b)
{
  **b=**a;
}

int main()
{
    int* temp=(int*)malloc(sizeof(int));
    *temp=4;
    const int* a;
    a=temp;

    int* const b=(int*)malloc(sizeof(int));
    *b=2;

    przepisanie(&a,&b);
    printf("%d %d",*a,*b);

    return 0;
}
