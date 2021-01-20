#include <iostream>
using namespace std;
int hansu(int n);

int main()
{
	int n; cin >> n;

	cout<<hansu(n);

	return 0;
}

int hansu(int n) {
	int sub;
	int count = 0;

	for (int i = 1; i <= n; i++) {

		if (i < 100)
		{
			count++;
		}
		else if (i<1000)
		{
			sub = i / 10 % 10 - i % 10;
			if (sub == i / 100 %10 - i / 10 % 10) {
				count++;
			}
		}
		else
		{ 
			sub = i / 10 % 10 - i % 10;
			if (sub == i / 100 % 10 - i / 10 % 10) {
				if(sub == i/1000 % 10 - i / 100 % 10)
				count++;
			}
		}
	}
	return count;
}