#include <iostream>
using namespace std;

int main() {
	int num; cin >> num;
	for (int k = 1; k < 10; k++) {
		cout << num <<" * " << k <<" = "<<num * k<<"\n";
	}
	return 0;
}