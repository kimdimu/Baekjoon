#include <iostream>
using namespace std;

int main()
{
	int array[10];
	int t = 0;
	int count=0;

	for (int i = 0; i < 10; i++) {
		cin >> array[i];

		for (int j = 1;  j <= i; j++) { 
			if (array[i] % 42 != array[i - j] % 42)
				count++;
		}

		if (count == i) {
			t++;
		}

		count = 0;
	}

	cout << t;

	return 0;
}
//받은 놈 순서 만큼 돈다.  i가 2이면   2랑1 비교, 2랑0비교 끝
//새로 받은 어레이i의 나머지와 그 전에 받은 나머지와 비교한다. 1, 2를 받았을 때
//2와 1을 비교해서 다르면 t를 올린다.
// 3을 받았다. 2와 비교할때 다르다. 1과 비교할 때 다르다. 그럼 t를 올린다.
//2를 받았다. 3과 다르다. 2와 같다. 1과 다르다 그럼 t를 안올린다.
//하나라도 같으면 t를 더하지 않는다.
//모든 i와 다르면 t를 올려준다.