#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[101]; cin >> c;
	char temp = 0;
	int count = 0;


	for (int i = 0; i < strlen(c); i++) {

		if (c[i] == 'j') 
		{
			if (temp != 'l' && temp != 'n') { 
				count++;
			}
		}
		else if (c[i] == 'z')
		{
			if (temp != 'd' || c[i + 1] != '=')
			{
				count++;
			}
		}
		else if (c[i] >= 97 && c[i] <= 122) {
			count++;
		}

		temp = c[i];
	}

	cout << count;

	return 0;
}
//��!!

//c d ���� - ,  c dz s z ���� = ,///// l n ���� j, d ���� z�� üũ�ϸ� �ɵ�??					  //z�ε� 
//aljbjc-dz= 													   //j�ε�
//a: +1, b: +1, c: +1, -:+0, d: +1, d ������ z: +0 =				//�տ��� l n�� �ƴϸ� 	      //�տ��� d�� �ƴϸ� 
// - = �� ������� ���ص� �Ǵ¤���. �����ϵ�. 
//