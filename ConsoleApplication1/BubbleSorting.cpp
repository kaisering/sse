#include <iostream>
using namespace std;
class BubbleSorting
{
public:
	void sorting() {
		int num[] = { 5,8,1,6,7,3,9,2,4,5,10,0,3,9,1 };

		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			for (int j = 1; j < (sizeof(num) / sizeof(num[0])) - i; j++)
			{
				if (num[j - 1] > num[j]) {
					int temp = num[j];
					num[j] = num[j - 1];
					num[j - 1] = temp;
				}
			}
		}

		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			cout << num[i] << "\t";
		}
	}
};