#include <iostream>
using namespace std;
class SelectionSort
{
public:
	void sorting() {
		int num[] = { 5,8,1,6,7,3,9,2,4,5,10,0,3,9,1 };

		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			for (int j = i + 1; j < (sizeof(num) / sizeof(num[0])); j++)
			{
				if (num[i] > num[j]) {
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}

		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			cout << num[i] << "\t";
		}
	}
};