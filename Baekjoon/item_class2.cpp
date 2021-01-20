#include <iostream>

using namespace std;

class Item { //활자판
private:
	string item_name;
	string user_name;
	string item_type;
	string grade;
	int damage; // 변수
	int range;
public:
	Item(string s1, string s2, string s3);
	Item(string s1, string s2, string s3, int d, int r);
	void Info();
	void Pick(string s1);
	void Throwaway();
};

Item::Item(string s1, string s2, string s3) {
	item_name = s1;
	item_type = s2;
	grade = s3;
}

Item::Item(string s1, string s2, string s3, int d, int r) {
	item_name = s1;
	item_type = s2;
	grade = s3;
	damage = d;
	range = r;
}

void Item::Info() {
	cout << item_name <<"의 타입은 : " << item_type << "입니다." << endl;
	cout << "등급: " << grade << endl;
	if (item_type == "Weapon") {
		cout << item_name << "의 데미지는 : " << damage << "입니다." << endl;
		cout << item_name << "의 사거리는 : " << range << "입니다." << endl;
	}

}

void Item::Pick(string s1) {
	user_name = s1;
	cout << item_name << "아이템은 해당 유저의 소유가 되었습니다 : " << user_name << endl;
}

void Item::Throwaway() {
	cout << item_name << "이 아이템은 해당 유저로 부터 버림 받았습니다 : " << user_name << endl;
	user_name = "";
}

int main() {
	Item ChonyBow("초니의 활", "Weapon","normal", 10, 550);
	Item MinuniArmor("민훈의 갑옷", "Armor", "unique");

	ChonyBow.Pick("이민훈");
	ChonyBow.Info();
	ChonyBow.Throwaway();

	MinuniArmor.Pick("김채원");
	MinuniArmor.Info();

	return 0;
}