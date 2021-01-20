#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[101]; cin >> c;
	char temp = 0;
	int count = 0;


	for (int i = 0; i < strlen(c); i++) {

		if (c[i] == 'j') 
		{
			if (temp != 'l' && temp != 'n') { 
				count++;
			}
		}
		else if (c[i] == 'z')
		{
			if (temp != 'd' || c[i + 1] != '=')
			{
				count++;
			}
		}
		else if (c[i] >= 97 && c[i] <= 122) {
			count++;
		}

		temp = c[i];
	}

	cout << count;

	return 0;
}
//와!!

//c d 다음 - ,  c dz s z 다음 = ,///// l n 다음 j, d 다음 z만 체크하면 될듯??					  //z인데 
//aljbjc-dz= 													   //j인데
//a: +1, b: +1, c: +1, -:+0, d: +1, d 다음의 z: +0 =				//앞에가 l n이 아니면 	      //앞에가 d가 아니면 
// - = 은 글자취급 안해도 되는ㄴ가. 가능일듯. 
//