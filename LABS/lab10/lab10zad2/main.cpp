#include <iostream>


using namespace std;

void addchar(char tab1[],char tab2[],char tab3[]){
   int i=0;
   int j=0;

   while(tab1[i]){
   tab3[i]=tab1[i];
   i++;
   }

   while(tab2[j]){
    tab3[i]=tab2[j];
    i++;
    j++;
   }
}

int main()
{
    char tab1[10]="Ala m";
    char tab2[10]="a kota";
    char tab3[20];

    addchar(tab1,tab2,tab3);

    int i=0;
    while(tab3[i]){
        cout<<tab3[i];
        i++;
    }


    return 0;
}
