#include <iostream>
using namespace std;

int main()
{
	int t;  cin >> t;
	int r;
	int count;
	
	for (int i = 0; i < t; i++) {
		char s[21];
		count = 0;
		cin >> r >> s;
		for (int i = 0; s[i] != NULL; i++) {
			count++;
		}
		char* s2 = new char[count * r+1];//3 * 3 = 9 

		for (int j = 0; j < count; j++) {

			for (int k = 0; k < r; k++) {
				s2[k + j * r] = s[j];
			}
		}

		cout << s2 << endl;
	}
	return 0;
}
	/*
	for (int i = 0; i < t; i++) {
		string s;
		cin >> r >> s;
		for (int j = 0; j < s.size(); j++) {
			for (int k = 0; k < r; k++) {
				cout << s[j];
			}
		}
		cout << endl;
	}
	*/

