#include <iostream>

using namespace std;

int main()
{
    int t [4][3]={};
    for(int i=0; i<4; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d",&t[i][j]);
            printf("\n ");
            for(int i=0; i<4; i++)
            {
                for (int j=0; j<3; j++)
                {
                    printf("%3d ",t[i][j]);
                }
                printf("\n ");
            }
        }
    }
    return 0;
}
