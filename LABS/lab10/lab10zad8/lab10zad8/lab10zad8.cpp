#include <iostream>
#include <cctype>

using namespace std;

void upper(string &txt) {
	int i = 0;
	while (txt[i]) {
		txt[i] = (char)toupper(txt[i]);
		i++;
	}
}

int main()
{
	string txt = { "abc" };

	upper(txt);

	cout << txt;
}

