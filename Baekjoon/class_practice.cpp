#include <iostream>

using namespace std;

class Car { //Ȱ����
private:
	string driver;
	int speed; // ����
public: 
	Car(string s, int spd); // �Լ�
	void Rush(); // �Լ�
	void SetSpeed(int spd); // �Լ�
};

Car::Car(string s, int spd) {
	driver = s;
	speed = spd;
}

void Car::Rush() {
	cout << driver << "(��)�� " << speed << "�� �ӵ��� �����մϴ�." << endl;
}

void Car::SetSpeed(int spd) {
	speed = spd;
}

int main() {
	Car ChaewonCar("ä��", 10); //ä��ī �����Ⱦ� ä��ī �ٷ� ź�� �̰� ���ٷ� ������;; ��¥��
	Car MinhoonCar("����", 150);
	cout << "ä��ī@@@@@@@@@@@2" << endl;
	ChaewonCar.Rush();
	ChaewonCar.SetSpeed(20);
	ChaewonCar.Rush();
	cout << "����ī@@@@@@@@@@@2" << endl;
	MinhoonCar.Rush();
	MinhoonCar.SetSpeed(300);
	MinhoonCar.Rush();

	return 0;
}