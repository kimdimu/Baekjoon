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
//�󶼶󶼶󶾸��̾�~~ ���� �׸��׸� �׸���~~ ���õ��ݺ��Ǵ� ���� ��~~//0�� ���� ���³𺸴� �۴�! �� ���ο� ���� ũ��!
