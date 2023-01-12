#include <iostream>
#include <string.h>

using namespace std;

string add(string tab1,string tab2,string tab3){
   tab3=tab1+tab2;

   return tab3;
}

int main()
{
    string tab1="Ala m";
    string tab2="a kota";
    string tab3;

    cout<<add(tab1,tab2,tab3);


    return 0;
}
