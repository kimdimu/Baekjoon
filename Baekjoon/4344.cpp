#include <iostream>
using namespace std;

int main()
{
	int c; cin >> c;
	float* ave = new float[c]; 
	float* top = new float[c] {0};
	float* ratio = new float[c]; 

	for (int i = 0; i < c; i++) {
		float t; cin >> t;
		float sum = 0;
		int* score = new int[(int)t];

		for (int j = 0; j < t; j++) {
			cin >> score[j];
			sum += score[j];
		}

		ave[i] = sum / t;

		for (int j = 0; j < t; j++) {
			if (score[j] > ave[i]) {
				top[i]++;
			}
		}

		ratio[i] = (top[i] / t)*100;
	}

	for (int i = 0; i < c; i++) {
		cout << fixed;
		cout.precision(3);
		cout << ratio[i] << "%" << endl;
	}

	return 0;
}