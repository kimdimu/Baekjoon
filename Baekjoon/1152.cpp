#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s; getline(cin, s);
	int a = 0; 
	int count = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ')
		{
			if (a == 2)
			{
				count++;
			}

			a = 1;
		}
		else if (s[i] == ' ')
		{
			if (a == 1)
			{
				a = 2;
			}
			else {
				if (a != 2)
					a = 0;
			}
		}
	}
	if (a == 1 || a == 2)
	{
		count++;
	}

	cout << count;

	return 0;
}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s; getline(cin, s);
//	int a = 0; //0: �Ϲ� ����  1: �Ϲ� ���� 2: �� > �� > ��
//	int count = 1;
//
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] != ' ') //�� ���ڰ� ������ �ƴϸ�
//		{
//			if (a == 2) //����1 > ����2 > ���� = ī��Ʈ++
//				count++; //�ܾ� ���� ����.
//
//			a = 1; //�����̴�.
//		}
//		else if (s[i] == ' ')
//		{
//			if (a == 1) //�� ���ڰ� ������ �ƴϾ��� ���� �����̶��
//			{
//				a = 2; //���� ���� �����̴�.
//			}
//			else { //������ �׷��� �����̶��
//				if (a != 2)
//					a = 0; //�����̴�.
//			}
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}