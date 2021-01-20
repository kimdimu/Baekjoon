#include <iostream>
using namespace std;
int mul(int a, int b, int c);
int main()
{
	int a, b, c; cin >> a >> b >> c;
	int num[10];
	int count=1;
	int mul10=1;

	for (int i = 0; i < 10; i++) {
		count = 0;
		mul10 = 1;

		while (mul(a, b, c) / mul10 > 0) { 
			
			if ((mul(a, b, c) / mul10) % 10 == i) {
				count++;
			}

			mul10 *= 10;

		}

		num[i] = count;
		cout << num[i] << "\n";
	}
	return 0;
}

int mul(int a, int b, int c) {

	return a * b * c;
}

		//자리수마다 검사한다.
		//mul에서 i가 몇개 있는지 검사해서 num[i]에 넣겠지
		//자릿수별로 몽땅 검사.  자릿수가 다 다르잔아? 자릿수 만큼 반복을 돌게 하자.
			//cout << mul(a, b, c) << " " << mul(a, b, c) / mul10 << "\n";
