#include <iostream>
using namespace std;
int createNum(int n);

int main()
{
	int n; cin >> n;
	int origin = n;
	int length = 1;

	while (createNum(n) != origin) {
		n = createNum(n); // 26 -> 68
		cout << n << endl;
		length++;
	}

	cout << length;
	
	return 0;
}

int createNum(int n) {
	int digit = n / 10 + n % 10; // 14;
	int newNum = n % 10 * 10 + digit % 10; // 68

	return newNum;
}