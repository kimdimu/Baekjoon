#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;
	int sum = 0;
	char* num = new char[n];

	cin >> num;

	for (int i = 0; i < n; i++) {
		sum += num[i] - '0';
	}
	cout << sum;
	return 0;
}