#include <iostream>
using namespace std;
int Pt(int n, int pt);
int main()
{
	//n! n>1 -> n*(n-1)! == n*n(n-2)
	int n; cin >> n; //n!
	int pt1 = 1;
	int pt = 1;

	if (n > 0) {
		for (int i = 0; i < n; i++) {
			pt1 *= n - i;
		}
	}
	else
		pt1 = 0;

	cout <<  " " << Pt(n, pt)<<endl;

	return 0;
}

int Pt(int n, int pt) {

	//Ż��������~~ n�� ... 0�� �Ǿ�����~?
	if (n == 0) { //�� . .  �� ��������
		return pt; //�̻��� �����̱�..
	}
	// ���Ѵ�... ��� ������ ��� 
	pt *= n; //��  ? ?
	cout << pt << " " << n <<endl;
	//n�� �ϳ� ���δ�..
	n -= 1;
	//���� n�� ���� ���  // Ż������ n�� 0�����۳�? �³�.. ���
	Pt(n, pt);

	return pt;
}