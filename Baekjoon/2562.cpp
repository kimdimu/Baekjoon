#include <iostream>
using namespace std;

int main()
{
	int num[9];
	int max=NULL;
	int s;

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (max < num[i]) {
			max = num[i];
			s = i;
		}
	}
	cout << num[s] << " " << s+1;

	return 0;
}
//라떼라떼라뗀말이야~~ 제발 그만그만 그마내~~ 오늘도반복되는 꼰대 라때~~//0이 새로 들어온놈보다 작다! 즉 새로온 놈이 크다!
