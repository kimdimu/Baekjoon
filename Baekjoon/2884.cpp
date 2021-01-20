#include <iostream>

using namespace std;
int Alarm(int h, int m, int minusTime, int type);

int main() 
{
	int hour, minute; cin >> hour >> minute;
	 
	cout << Alarm(hour, minute, 45, 0) << " "<< Alarm(hour, minute, 45, 1);

	return 0;
}

int Alarm(int h, int m, int minusTime, int type)
{
	m -= minusTime;

	if (m < 0)
	{
		m = 60 + m;
		int minushours = 0;
		minushours = -m / 60;

		if (m % 60 != 0)
			minushours += 1;

		h -= minushours;

		if (h < 0)
			h = 24 + h;
	}
	if (type == 0)
		return h;
	if (type == 1)
		return m;
}
