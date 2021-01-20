#include <iostream>

using namespace std;

class Item { //Ȱ����
private:
	string item_name;
	string user_name;
	string item_type;
	string grade;
	int damage; // ����
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
	cout << item_name <<"�� Ÿ���� : " << item_type << "�Դϴ�." << endl;
	cout << "���: " << grade << endl;
	if (item_type == "Weapon") {
		cout << item_name << "�� �������� : " << damage << "�Դϴ�." << endl;
		cout << item_name << "�� ��Ÿ��� : " << range << "�Դϴ�." << endl;
	}

}

void Item::Pick(string s1) {
	user_name = s1;
	cout << item_name << "�������� �ش� ������ ������ �Ǿ����ϴ� : " << user_name << endl;
}

void Item::Throwaway() {
	cout << item_name << "�� �������� �ش� ������ ���� ���� �޾ҽ��ϴ� : " << user_name << endl;
	user_name = "";
}

int main() {
	Item ChonyBow("�ʴ��� Ȱ", "Weapon","normal", 10, 550);
	Item MinuniArmor("������ ����", "Armor", "unique");

	ChonyBow.Pick("�̹���");
	ChonyBow.Info();
	ChonyBow.Throwaway();

	MinuniArmor.Pick("��ä��");
	MinuniArmor.Info();

	return 0;
}