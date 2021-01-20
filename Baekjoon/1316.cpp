#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n; cin >> n;
	string* s = new string[n];
	int count = n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];

		for (int j = 2; j < s[i].size(); j++) {

			if (s[i][j - 1] != s[i][j])
			{
				for (int k = 0; k <= j - 2; k++)
				{
					if (s[i][j] == s[i][k])
					{
						count--;
						j = s[i].size();
						k = j - 2;
					}
				}
			}
		}
	}
	cout << count;

	return 0;
}
// 앞에서 이미 검사한 문자를 저장하고 다음에 또 그 문자가나오면 그룹단어 개수에 포함시키지 않는다.
			//셋째 자리 검사중..
			//만약에 a를 받았다... 다음에 b를 받았다... 그 다음에 c를 받았다 더이상 들어오는 게 없다.. 그럼??
			//
			//만약에 a를 받았다... 다음에 b를 받았다... 그 다음에 a를 받았다 count--
			//(s[j-1]) != s[j] 일 때 ,  for(int k = 0 ; k < i-2 ; k++) (j-2)번째까지의 알파벳에 s[j]가 있었다면? *끝*
									 // if(s[j]==s[k]) {  }
