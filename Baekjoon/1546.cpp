#include <iostream>
using namespace std;

int main()
{
	int length; cin >> length;
	float* score = new float[length];
	float max = 0;

	for (int i = 0; i < length; i++) {
		cin >> score[i];
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int i = 0; i < length; i++) {
		score[i] = score[i] / max * 100;
	}

	float sum = 0;

	for (int i = 0; i < length; i++) {
		sum += score[i];
	}

	cout << sum/length;

	return 0;
}

//1. 일단 입력한 점수의 최댓값을 구한다.
	//2. 모든 점수에 score[i]/max*100를 집어넣는다.
	//3. 새 점수의 평균을 출력한다.