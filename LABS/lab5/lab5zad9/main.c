#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pierwsza=0;
    int ostatnia=0;
    long iloczyn=1;
    scanf("%d%d",&pierwsza,&ostatnia);
    if(pierwsza%2==0)
    {
        pierwsza++;
    }
    for(pierwsza;pierwsza<=ostatnia;pierwsza+=2)
    {
    iloczyn*=pierwsza;
    }
    printf(" %d ",iloczyn);
    return 0;
}
