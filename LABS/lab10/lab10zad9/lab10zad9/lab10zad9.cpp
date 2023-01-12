#include <iostream>
#include <cctype>

using namespace std;

int lek(char* tab1,char*tab2) {
    int result=0;

    int i = 0;
    while (1) {
        while (tab1[i] && tab2[i]) {
            if (tab1[i] > tab2[i]) return 1;
            if (tab1[i] < tab2[i]) return 0;
            i++;
        }
        return 2;
    }
}


int main() {

    char tab1[10] = { "abcd" };
    char tab2[10] = { "zxcv" };

    cout << lek(tab1, tab2);
	return 0;
}