#include <iostream>
using namespace std;

int main()
{
	int fixedCosts, variableCosts, price;  cin >> fixedCosts >> variableCosts >> price;
	int Q = 0;

	if (price <= variableCosts)
		Q = -1;
	else
		Q = fixedCosts / (price - variableCosts) + 1;

	cout << Q;

	return 0;
}

//1 2 3 = 2    1
//70 70 130 = 2    60
//2000000000 2000000000 2000000001 = 2000000001
//210 209 210     1
//999 70 170 = 10    100
//210000000 1 210000000 = 2

//while (totalRevenue <= totalCost) {
//	totalRevenue += price;
//	totalCost += variableCosts;
//	cout << totalRevenue << " " << totalCost << endl;
//	Q++;
//}