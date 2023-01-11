#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mniej=0;
    int wiecej=0;
    int tab[10]={5,2,3,-23,5,6,0,8,9,15};
    mniej=tab[0];
    wiecej=tab[0];
    for(int i=0;i<9;i++)
    {
        if(mniej>tab[i+1])
        {
            mniej=tab[i+1];
        }

        if(wiecej<tab[i+1])
        {
            wiecej=tab[i+1];
        }

    }
    printf("%d",wiecej-mniej);
    return 0;
}
