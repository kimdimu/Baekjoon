#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n; cin >> n;
	string* s = new string[n];
	int count = n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];

		for (int j = 2; j < s[i].size(); j++) {

			if (s[i][j - 1] != s[i][j])
			{
				for (int k = 0; k <= j - 2; k++)
				{
					if (s[i][j] == s[i][k])
					{
						count--;
						j = s[i].size();
						k = j - 2;
					}
				}
			}
		}
	}
	cout << count;

	return 0;
}
// �տ��� �̹� �˻��� ���ڸ� �����ϰ� ������ �� �� ���ڰ������� �׷�ܾ� ������ ���Խ�Ű�� �ʴ´�.
			//��° �ڸ� �˻���..
			//���࿡ a�� �޾Ҵ�... ������ b�� �޾Ҵ�... �� ������ c�� �޾Ҵ� ���̻� ������ �� ����.. �׷�??
			//
			//���࿡ a�� �޾Ҵ�... ������ b�� �޾Ҵ�... �� ������ a�� �޾Ҵ� count--
			//(s[j-1]) != s[j] �� �� ,  for(int k = 0 ; k < i-2 ; k++) (j-2)��°������ ���ĺ��� s[j]�� �־��ٸ�? *��*
									 // if(s[j]==s[k]) {  }
