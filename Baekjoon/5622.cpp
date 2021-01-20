#include <iostream>
using namespace std;

int main()
{
	char grandmother[16];
	cin >> grandmother;
	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int timee = 0;

	for (int i = 0; grandmother[i] != NULL; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (grandmother[i] == j + 65)
			{
				timee += time[j];
			}
		}
	}

	cout << timee;

	return 0;
}

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char grandmother[15]; cin >> grandmother; //65~ 90  A to Z
//	int time = 0;
//	int count = 0;
//
//	for (int i = 0; i < 15; i++)
//	{
//		if (grandmother[i] == 65 || grandmother[i] == 66 || grandmother[i] == 67) //ABC
//			time += 3;
//		else if (grandmother[i] == 68 || grandmother[i] == 69 || grandmother[i] == 70) //DEF
//			time += 4;
//		else if (grandmother[i] == 71 || grandmother[i] == 72 || grandmother[i] == 73) //GHI
//			time += 5;
//		else if (grandmother[i] == 74 || grandmother[i] == 75 || grandmother[i] == 76) //JKL
//			time += 6;
//		else if (grandmother[i] == 77 || grandmother[i] == 78 || grandmother[i] == 79) //MNO
//			time += 7;
//		else if (grandmother[i] == 80 || grandmother[i] == 81 || grandmother[i] == 82 || grandmother[i] == 83) //PQRS
//			time += 8;
//		else if (grandmother[i] == 84 || grandmother[i] == 85 || grandmother[i] == 86) //TUV 
//			time += 9;
//		else if (grandmother[i] == 87 || grandmother[i] == 88 || grandmother[i] == 89 || grandmother[i] == 90) //WXYZ
//			time += 10;
//	}
//
//	cout << time;
//
//	return 0;
//}


//for (int j = 0; j < 15; j++)
//{
//	if (grandmother[i] == j + 65) { //123+1+456+2+789+3+101112+4+131415+5+ 16171819+6+ 202122+7+ 23242526 //+8+
//		time += 3 + count;
//		count++;
//	}
//
//
//	if (j % 3 == 0)
//	{
//		time += 3 + count;
//		count++;
//	}
//}
//
//for (int j = 15; j < 19; j++)
//{
//	if (grandmother[i] == j + 65)
//	{
//		time += 3 + count;
//		count++;
//	}
//}
