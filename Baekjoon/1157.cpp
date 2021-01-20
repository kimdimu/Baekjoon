#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string alpha; cin >> alpha;
	int* count = new int[alpha.size() + 1]{ 0 };
	int* count2 = new int[alpha.size() + 1]{ 0 };

	for (int i = 0; i < alpha.size(); i++)
	{
		for (int j = 0; j < alpha.size(); j++)
		{
			if ((alpha[i] == alpha[j] || alpha[i] == tolower(alpha[j]) || alpha[i] == toupper(alpha[j]) )&& count[j] == 0)
			{
				count[j]++; 
				count2[i]++;
			}
		}
	}
	//ㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜㅜ
	//일단 포기
	int top[2] = {0};
	int con=0;

	for (int i = 0; i < alpha.size(); i++) {
		if (count2[i] != 0) {

			if (count2[i] > top[0]) {
				top[0] = count2[i];
				top[1] = i;
				con = 0;
			}
			else if (count2[i] == top[0])
			{
				con = 1;
			}
		}
	}

	if (con == 0)
		cout << (char)toupper(alpha[top[1]]) << endl;
	else
		cout << '?' << endl;

	return 0;
}

	//m..i s s i s s i p i   m i s p  일단 들어간 알파벳을 검출해볼까 어떻게 하징 캐릭터로 ㅏㅂ꿔? ?
	//m으루 쭉 검사한다 . . . >> 첫자리만 같을것임. >>그 부분의 카운트를 올린다.
	//i로 쭉 검사 >> 1479 true >>올린다   s루 검사 >> 올린다 i가 돌아왔따. 이미 1479에 카운트가 올라가 있을거다.
	//카운트가 올라와 있으면 더하지 않는다. ??
	//대문자랑 소문자를 구별하지 않는다구..
	//m 1개.. 
