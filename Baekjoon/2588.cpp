#include<iostream>

using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	int factor = 1;

	while (b / factor > 0) {
		cout << a * (b / factor % 10) << endl;
		factor *= 10;
	}

	cout << a * b << endl;

	return 0;
}