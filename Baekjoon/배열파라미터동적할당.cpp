#include<iostream>

using namespace std;

void PrintArray(int array[3], int length);
void GetArray(int array[3], int length);
void PrintOneArray(int array[]);
void ParamPlus(int array[], int index);

int main()
{
	//int dimusArray1[3];

	//for (int i = 0; i < 3; i++) {
	//	cin >> dimusArray1[i];
	//}

	char* dimusArray3{ new char[20] {"Hello World!\n"} };
	cout << dimusArray3; // ��ο��尡 ��µȴ�.

	int length;
	cout << "�迭 ���̸� ����\n";
	cin >> length;

	int* dimusArray2 = new int[length];// {0};  //�����͸� ���.. ���̵� ������� �Ѵ�.
	cout << dimusArray2 << endl; //�ּҰ� ��µȴ�.
	//heap���� �޸𸮸� ã�Ƽ� �ּҸ� �迭��.. �޴´�.
	
	GetArray(dimusArray2, length);


	
	PrintOneArray(dimusArray2);

	PrintArray(dimusArray2, length);

	delete[] dimusArray3;
	delete[] dimusArray2; //�Ҵ� ���� heap ���� ����

	return 0;
}

void PrintArray(int array[],int length)
{
	cout << "���� �ư����̾�\n";
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}

void GetArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << i <<"��° �迭�� �ʱ�ȭ ��\n";
		cin >> array[i];
	}
}

void PrintOneArray(int array[])
{
	cout << "�� ��° ������ ���ڸ� ���ϰ� �ʹ�?\n";
	int index;
	cin >> index;
	ParamPlus(array, index);
}

void ParamPlus(int array[], int index)
{
	cout << "�󸶳� ���ϰ� �ʹ�?\n";
	int pluss;
	cin >> pluss;
	array[index] += pluss;
}