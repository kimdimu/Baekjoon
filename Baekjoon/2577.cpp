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

		//�ڸ������� �˻��Ѵ�.
		//mul���� i�� � �ִ��� �˻��ؼ� num[i]�� �ְ���
		//�ڸ������� ���� �˻�.  �ڸ����� �� �ٸ��ܾ�? �ڸ��� ��ŭ �ݺ��� ���� ����.
			//cout << mul(a, b, c) << " " << mul(a, b, c) / mul10 << "\n";
