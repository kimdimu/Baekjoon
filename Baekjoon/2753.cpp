#include <iostream>

using namespace std;
int Leafyear(int year);

int main()
{
	int year;

	cin >> year;

	cout << Leafyear(year);

}

int Leafyear(int year)
{
	int isLeafyear;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) //100�� ����� �ƴ� �� �Ǵ� 400�� ����� ��
	{
		isLeafyear = 1;
		return isLeafyear;
	}
	else {
		isLeafyear = 0;
		return isLeafyear;
	}
}