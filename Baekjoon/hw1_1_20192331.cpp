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


//소트를 부른다.0부터. 
//최솟값 min = index
//list[index] > list[index+1] 이면 min = index + 1
//그리고 그 민을 
//
//탈출조건 maxindex보다 현재 들어온 인덱스가 1 작을 경우
//현재 들어온 인덱스는 어떻게 아는가?




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