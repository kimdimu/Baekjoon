#include<iostream>

using namespace std;

int mul(int a, int b);

int main() {

	int a, b; cin >> a >> b;

	cout << mul(a, b);

	return 0;
}

int mul(int a, int b) {
	return a * b;
}