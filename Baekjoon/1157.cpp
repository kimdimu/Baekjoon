#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string alpha; cin >> alpha;
	int* count = new int[alpha.size() + 1]{ 0 };
	int* count2 = new int[alpha.size() + 1]{ 0 };

	for (int i = 0; i < alpha.size(); i++)
	{
		for (int j = 0; j < alpha.size(); j++)
		{
			if ((alpha[i] == alpha[j] || alpha[i] == tolower(alpha[j]) || alpha[i] == toupper(alpha[j]) )&& count[j] == 0)
			{
				count[j]++; 
				count2[i]++;
			}
		}
	}
	//�̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤̤�
	//�ϴ� ����
	int top[2] = {0};
	int con=0;

	for (int i = 0; i < alpha.size(); i++) {
		if (count2[i] != 0) {

			if (count2[i] > top[0]) {
				top[0] = count2[i];
				top[1] = i;
				con = 0;
			}
			else if (count2[i] == top[0])
			{
				con = 1;
			}
		}
	}

	if (con == 0)
		cout << (char)toupper(alpha[top[1]]) << endl;
	else
		cout << '?' << endl;

	return 0;
}

	//m..i s s i s s i p i   m i s p  �ϴ� �� ���ĺ��� �����غ��� ��� ��¡ ĳ���ͷ� ������? ?
	//m���� �� �˻��Ѵ� . . . >> ù�ڸ��� ��������. >>�� �κ��� ī��Ʈ�� �ø���.
	//i�� �� �˻� >> 1479 true >>�ø���   s�� �˻� >> �ø��� i�� ���ƿԵ�. �̹� 1479�� ī��Ʈ�� �ö� �����Ŵ�.
	//ī��Ʈ�� �ö�� ������ ������ �ʴ´�. ??
	//�빮�ڶ� �ҹ��ڸ� �������� �ʴ´ٱ�..
	//m 1��.. 
