#include <iostream>

using namespace std;

char lowerToUpper(char tab1[]){
    int i=0;
  while(tab1[i]){
    if(tab1[i]>=97) tab1[i]=tab1[i]-32;
    return tab1[i];
    i++;

  }
}

int main()
{
    char tab1[10]="Test CaSe";
    int i=0;


    while(tab1[i]){
    cout<<lowerToUpper(&tab1[i]);
    i++;
    }



    return 0;
}
