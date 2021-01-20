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

//ox를 받는다.	
//t만큼 반복해서 ox[i]의 점수를 계산한다.
//일단 ox[0]의 점수를 계산해보자
//모두 o라면?