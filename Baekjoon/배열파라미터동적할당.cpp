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
	cout << dimusArray3; // 헬로월드가 출력된다.

	int length;
	cout << "배열 길이를 쓰렴\n";
	cin >> length;

	int* dimusArray2 = new int[length];// {0};  //포인터를 써야.. 길이도 정해줘야 한다.
	cout << dimusArray2 << endl; //주소가 출력된다.
	//heap에서 메모리를 찾아서 주소를 배열로.. 받는다.
	
	GetArray(dimusArray2, length);


	
	PrintOneArray(dimusArray2);

	PrintArray(dimusArray2, length);

	delete[] dimusArray3;
	delete[] dimusArray2; //할당 해제 heap 에서 삭제

	return 0;
}

void PrintArray(int array[],int length)
{
	cout << "너의 아가들이야\n";
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}

void GetArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << i <<"번째 배열을 초기화 행\n";
		cin >> array[i];
	}
}

void PrintOneArray(int array[])
{
	cout << "몇 번째 변수에 숫자를 더하고 싶닝?\n";
	int index;
	cin >> index;
	ParamPlus(array, index);
}

void ParamPlus(int array[], int index)
{
	cout << "얼마나 더하고 싶닝?\n";
	int pluss;
	cin >> pluss;
	array[index] += pluss;
}