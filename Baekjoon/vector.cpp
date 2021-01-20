#include<iostream>
#include<vector>
using namespace std;


int main() {
	vector<char> ohohoh;

	ohohoh.push_back('a'); //푸쉬 // 1000 + 7 * (1) = 1007..
	ohohoh.push_back('b');
	ohohoh.push_back('c');
	ohohoh.push_back('d');
	ohohoh.push_back('e');
	ohohoh.push_back('f');
	ohohoh.push_back('g');
	ohohoh.pop_back(); // 팝

	int* i;
	vector<char>::iterator iter; // 벡터의 주소를 나타냄
	// iteraotor 반복자도 이런식으로 동작
	iter = ohohoh.begin(); //아 begin() 벡터의 시작지점의 주소를 반환하는 함수구나!
	iter < ohohoh.end(); // 아 end() 벡터의 끝지점의 주소를 바환하는 함수구나. 보다 작을때까지
	// for(int i = 0 ; i < a.size();
	// 0 <= i < n;
	// 정수5~15까지를 포함하는 범위를 표현하고자 할때 여러가지방법
	// -> 5 <= n <= 15 -> 닫힌 구간 닫힌 구간의 단점? -> 공집합을 우아하게 표시할수 없다..
	// -> 빈집합을 범위 표현을 할 수 없다. 6 <= n <= 5 -> 공집합 (해당되는 n이없잖아.) 5 <= n <= 5(5가 포함이됨)
	// -> 4 < n < 16 -> 열린 구간 -> 0부터 시작하자 배열이 인덱스 -1 < n < 16
	// -> 5 <= n < 16 O -> 0 <= n < 15 // 5 <= n < 5 (공집합.)
	// 0 <= i <= n;
	// 0 < i < n;
	for (int i = 0; i < a.size(); i++) {

	}
	for (iter = ohohoh.begin(); iter < ohohoh.end(); iter++) {
		cout << *iter << endl;
	}



	//수시 6개 줬는데
	// 최소 지거국은 되야함(부산, 부경대도 국립대니까 지거국은 아니더라도 여까지 국립라인까지 ㅇㅈ)
	// 그 밑으로는 다 == 이라고 생각하거든 (과가 중요) -> 성적맞춰서 간 친구 하나 있는데 지금 상황이 좀 verry bad..
	// 그래서 성적맞춰서 가는거 비추천..... 하지만 하고싶은게 아직 생각ㅇ이 안난다니 어쩔수없는 노릇,,,,,
	// 내기준 상향 -> 동의대, 경성대, 이 윗라인(동아, 부경, 부산 -> 아예 못감)  534 44 1(필수) 1은ㅁ뭐야한국사? 수3?
	// 동서대 컴공 -> 추가합격 연락옴(감) // 하향
	// 대학은 가야하니까 신라, 동명, 영산 역대급 개쓰레기학교 3개 넣어놓고
	// 신라대 컴공 -> 탙ㄹ락? 붙었나 기억안남
	// 동명대 컴공 -> 확실히 떨어짐(기억남)
	// 영산대 컴공 -> 추가합격 연락옴(이미 딴데 붙었다고 안간다고함)
	// 2장 돈아까워서 안씀

}