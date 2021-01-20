#include<iostream>

using namespace std;

double divide(int a, int b);

int main() {

	int a, b; cin >> a >> b;
	cout.precision(10);
	cout << fixed;
	cout << divide(a, b);

	return 0;
}

double divide(int a, int b) {
	return a / double(b);
}