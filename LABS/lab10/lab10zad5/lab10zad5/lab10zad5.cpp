#include <iostream>

using namespace std;

string lek(string tab[],int n) {
    string winner = "";

    int i = 0;
    int j = 0;
    while (1) {

        while (tab[j][i]) {
            if (tab[j][i] > tab[j + 1][i]) winner =tab[j];
            if (tab[j][i] < tab[j + 1][i]) winner = tab[j + 1];
            i++;
        }
        i = 0;
        j++;
        if (j == n-1) return winner;
    }
}

int main()
{
    const int n = 3;
    string tab[n];
    tab[0] = "one";
    tab[1] = "two";
    tab[2] = "three";

    cout<< lek(tab, n);
    return 0;
}


