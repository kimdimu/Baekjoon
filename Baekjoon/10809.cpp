#include <iostream>
using namespace std;

int main()
{
	char s[100]{ 0 }; cin >> s;
	int locate[26];

	for (int i = 0; i < 26; i++) {
		locate[i] = -1;
	}

	for (int j = 0; j < 26; j++) {
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] == j + 97) {
				locate[j] = i;
				break;
			}
		}
		cout << locate[j] << " ";
	}

	return 0;
}

//cout << (char)(j + 97) << " " << locate[j] << endl;