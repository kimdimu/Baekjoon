#include <iostream>
using namespace std;

int main()
{
	int s; cin >> s;

	for (int i = 1; i <= s; i++) {
		for (int j = 0; j < s-i; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}