#include <iostream>
using namespace std;

int selfnum(int snum, int array[]);

int main()
{
	int array[10001] = { 0 };
	int sum = 0;


	for (int i = 1; i <= 10000; i++)
	{
		selfnum(i, array);
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (array[i] == 0)
			cout << i << endl;
	}
	return 0;
}

int selfnum(int snum, int array[]) {
	int mul = 1;
	int sum = 0;

	while (snum / mul > 0) {
		sum += (snum / mul) % 10;
		mul *= 10;
	}
	snum += sum;

	if (snum < 10001 && array[snum] == 0) {
		array[snum] = snum;
		selfnum(snum, array);
	}

	return snum;
}