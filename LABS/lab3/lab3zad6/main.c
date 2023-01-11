#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    do
    {
        printf("1.Opcja1 \n2.Opcja2\n3.Opcja3\n4.koniec\n");
        scanf("%d",&x);

        switch(x)
        {

        case 1:
            printf("wybralej opcje 1\n\n");
            break;
        case 2:
            printf("wybralej opcje 2\n\n");
            break;
        case 3:
            printf("wybralej opcje 3\n\n");
            break;
        case 4:
            break;
        default:
            printf("zly wybor");
        }


    }
    while(x!=4);


    return 0;
}
