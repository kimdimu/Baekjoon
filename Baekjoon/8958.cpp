#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t; cin >> t;
	string* OX = new string[t];
	int* score = new int[t] {0};
	int addscore = 0;

	for (int i = 0; i < t; i++)
	{
		cin >> OX[i];
		addscore = 0;
		for (int j = 0; j < OX[i].size(); j++) {
			if (OX[i][j] == 'O') {
				addscore += 1;
				score[i] += addscore;
			}
			else
			{
				addscore = 0;
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cout << score[i] << endl;
	}

	return 0;
}

//ox�� �޴´�.	
//t��ŭ �ݺ��ؼ� ox[i]�� ������ ����Ѵ�.
//�ϴ� ox[0]�� ������ ����غ���
//��� o���?