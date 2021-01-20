#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s; getline(cin, s);
	int a = 0; 
	int count = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ')
		{
			if (a == 2)
			{
				count++;
			}

			a = 1;
		}
		else if (s[i] == ' ')
		{
			if (a == 1)
			{
				a = 2;
			}
			else {
				if (a != 2)
					a = 0;
			}
		}
	}
	if (a == 1 || a == 2)
	{
		count++;
	}

	cout << count;

	return 0;
}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s; getline(cin, s);
//	int a = 0; //0: 일반 공백  1: 일반 문자 2: 문 > 공 > 문
//	int count = 1;
//
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] != ' ') //이 문자가 공백이 아니면
//		{
//			if (a == 2) //문자1 > 공백2 > 문자 = 카운트++
//				count++; //단어 개수 증가.
//
//			a = 1; //문자이다.
//		}
//		else if (s[i] == ' ')
//		{
//			if (a == 1) //전 문자가 공백이 아니었고 지금 공백이라면
//			{
//				a = 2; //문자 다음 공백이다.
//			}
//			else { //전에도 그렇고 공백이라면
//				if (a != 2)
//					a = 0; //공백이다.
//			}
//		}
//	}
//
//	cout << count;
//
//	return 0;
//}