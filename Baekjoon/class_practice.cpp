#include <iostream>

using namespace std;

class Car { //활자판
private:
	string driver;
	int speed; // 변수
public: 
	Car(string s, int spd); // 함수
	void Rush(); // 함수
	void SetSpeed(int spd); // 함수
};

Car::Car(string s, int spd) {
	driver = s;
	speed = spd;
}

void Car::Rush() {
	cout << driver << "(이)가 " << speed << "의 속도로 주행합니다." << endl;
}

void Car::SetSpeed(int spd) {
	speed = spd;
}

int main() {
	Car ChaewonCar("채원", 10); //채원카 찍어버렸어 채원카 바로 탄생 이거 한줄로 개지림;; 진짜로
	Car MinhoonCar("민훈", 150);
	cout << "채원카@@@@@@@@@@@2" << endl;
	ChaewonCar.Rush();
	ChaewonCar.SetSpeed(20);
	ChaewonCar.Rush();
	cout << "민훈카@@@@@@@@@@@2" << endl;
	MinhoonCar.Rush();
	MinhoonCar.SetSpeed(300);
	MinhoonCar.Rush();

	return 0;
}