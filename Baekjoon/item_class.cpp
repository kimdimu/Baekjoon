#include <iostream>

using namespace std;

void attack(string item);
void info(string item);

int main() {
	string item = "�ʴ��� Ȱ";
	string item2 = "������ �����";
	info(item);
	attack(item);
	info(item2);
	attack(item2);

	return 0;
}

void attack(string item) {
	if (item == "�ʴ��� Ȱ") {
		cout << "������ 10�� �������� �������ϴ�." << endl;
	}
	else if (item == "������ �����") {
		cout << "������ 500�� �������� �������ϴ�." << endl;
	}
}

void info(string item) {
	if (item == "�ʴ��� Ȱ") {
		cout << "�� ������ Ÿ���� Ȱ �Դϴ�." << endl;
		cout << "�������� 7-11 �Դϴ�." << endl;
	}
	else if (item == "������ �����") {
		cout << "�� ������ Ÿ���� ����� �Դϴ�." << endl;
		cout << "�������� 495-511 �Դϴ�." << endl;
	}
}