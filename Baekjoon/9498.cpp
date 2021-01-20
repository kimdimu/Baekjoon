#include<iostream>

using namespace std;

char compare(int score);

int main() {

	int score;

	cin >> score;
	cout << compare(score);

	return 0;
}

char compare(int score) {
	char asd[4] = { 'A','B','C','D' };

	for (int i = 0; i < 4; i++) {
		if (score >= 90 - i * 10) {
			return asd[i];
		}
	}
	return 'F';
}