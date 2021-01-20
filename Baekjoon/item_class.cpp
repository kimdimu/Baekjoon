#include <iostream>

using namespace std;

void attack(string item);
void info(string item);

int main() {
	string item = "초니의 활";
	string item2 = "민훈의 방망이";
	info(item);
	attack(item);
	info(item2);
	attack(item2);

	return 0;
}

void attack(string item) {
	if (item == "초니의 활") {
		cout << "적에게 10의 데미지를 입혔습니다." << endl;
	}
	else if (item == "민훈의 방망이") {
		cout << "적에게 500의 데미지를 입혔습니다." << endl;
	}
}

void info(string item) {
	if (item == "초니의 활") {
		cout << "이 무기의 타입은 활 입니다." << endl;
		cout << "데미지는 7-11 입니다." << endl;
	}
	else if (item == "민훈의 방망이") {
		cout << "이 무기의 타입은 방망이 입니다." << endl;
		cout << "데미지는 495-511 입니다." << endl;
	}
}