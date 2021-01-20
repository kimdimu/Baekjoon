#include <iostream>
using namespace std;
int sort(int list[], int maxindex, int min, int now);
void SWAP(int* a, int* b);

int main()
{
	int num; cin >> num;
	int* n = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> n[i];
	}

	for (int i = 0; i < num-1; i++)
	{
		int min = i;

		for (int j = i+1; j < num; j++)
		{
			if (n[min] > n[j]) {
				min = j;
			}
		}

		SWAP(&n[i], &n[min]);
	}

	for (int i = 0; i < num; i++) {
		cout << n[i] << " ";
	}

	return 0;
}

void SWAP(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


//��Ʈ�� �θ���.0����. 
//�ּڰ� min = index
//list[index] > list[index+1] �̸� min = index + 1
//�׸��� �� ���� 
//
//Ż������ maxindex���� ���� ���� �ε����� 1 ���� ���
//���� ���� �ε����� ��� �ƴ°�?




int sort(int list[], int maxindex, int min, int now) {

	if (maxindex - 1 == now)
	{
		return min;
	}
	min = now;
	if (list[min] > list[min + 1]) {
		min = min + 1;
	}

	now++;
	sort(list, maxindex, min, now);

	return min;
}