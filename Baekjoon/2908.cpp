#include <iostream>
#include <string>
using namespace std;
string reverse(string s);
int bignum(string s1, string s2);

int main()
{
	string s1, s2; cin >> s1 >> s2;
	
	cout << bignum(reverse(s1), reverse(s2));

	return 0;
}

string reverse(string s) {
	string s3 = { 0,0,0 };
	s3 = s;
	s[0] = s3[2];
	s[2] = s3[0];

	return s;
}

int bignum(string s1, string s2) {
	int a = stoi(s1);
	int b = stoi(s2);
	if (a - b > 0) {
		return a;
	}
	else if (b - a > 0)
	{
		return b;
	}
}