#include<iostream>

using namespace std;

double calc(int a, int b, int type);

int main()
{
	int a, b;

	cin >> a >> b;

	for (int i = 1; i <= 5; i++) {
		cout << calc(a, b, i) << endl;
	}

	return 0;
}

double calc(int a, int b, int type)
{
	
	if (type == 1) {
		return a + b;
	}
	else if (type == 2) {
		return a - b;
	}
	else if (type == 3) {
		return a * b;
	}
	else if (type == 4) {
		return a / b;
	}
	else if (type == 5) {
		return a % b;
	}
}