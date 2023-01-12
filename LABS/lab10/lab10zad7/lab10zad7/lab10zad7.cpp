#include <iostream>
#include <cctype>

using namespace std;

void upper(char tab[]) {
	int i = 0;
	while (tab[i]) {
		tab[i] = (char)toupper(tab[i]);
		i++;
	}
}

int main()
{
	char tab[10] = { "abc"};

	upper(tab);

	int j = 0;
	while (tab[j]) {
		cout<< tab[j];
		j++;
	}
}

