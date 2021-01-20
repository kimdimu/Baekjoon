#include <iostream>
using namespace std;
int Pt(int n, int pt);
int main()
{
	//n! n>1 -> n*(n-1)! == n*n(n-2)
	int n; cin >> n; //n!
	int pt1 = 1;
	int pt = 1;

	if (n > 0) {
		for (int i = 0; i < n; i++) {
			pt1 *= n - i;
		}
	}
	else
		pt1 = 0;

	cout <<  " " << Pt(n, pt)<<endl;

	return 0;
}

int Pt(int n, int pt) {

	//탈출조건은~~ n이 ... 0이 되었을떄~?
	if (n == 0) { //어 . .  흠 ㅁㄴㅇㄹ
		return pt; //이새끼 때문이군..
	}
	// 곱한다... 어디에 곱하지 흠냐 
	pt *= n; //엥  ? ?
	cout << pt << " " << n <<endl;
	//n을 하나 줄인다..
	n -= 1;
	//줄인 n을 넣은 재귀  // 탈출조건 n이 0보다작냐? 맞나.. 기기
	Pt(n, pt);

	return pt;
}