#include<iostream>

using namespace std;
int Quadrant(int x, int y);

int main()
{
	int x, y; cin >> x >> y;

	cout<<Quadrant(x, y);

return 0;
}

int Quadrant(int x, int y) {
	int quadrantn = 0;
	if (x > 0 && y > 0) {
		quadrantn = 1;
	}
	else if (x < 0 && y > 0) {
		quadrantn = 2;
	}
	else if (x < 0 && y < 0) {
		quadrantn = 3;
	}
	else if (x > 0 && y < 0) {
		quadrantn = 4;
	}

	return quadrantn;
}