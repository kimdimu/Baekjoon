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

//1. �ϴ� �Է��� ������ �ִ��� ���Ѵ�.
	//2. ��� ������ score[i]/max*100�� ����ִ´�.
	//3. �� ������ ����� ����Ѵ�.