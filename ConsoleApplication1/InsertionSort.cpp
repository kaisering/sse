#include <iostream>
using namespace std;
class InsertionSort
{
public:
	void sorting() {
		int num[] = { 5,8,1,6,7,3,9,2,4,5,10,0,3,9,1 };

		for (int i = 1; i < sizeof(num) / sizeof(num[0]); i++)
		{
			int temp = num[i];
			int j;
			for (j = i-1; j >=0; j--)
			{
				if (temp < num[j]) {
					num[j+1] = num[j];
				}
				else {
					break;
				}
			}
			num[j + 1] = temp;
		}

		for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		{
			cout << num[i] << "\t";
		}
	}
};