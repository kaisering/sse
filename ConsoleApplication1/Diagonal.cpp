#include<iostream>
#include<iomanip>
using namespace std;
class Diagonal {
public:
	int cal()
	{
		int a[3][3], m = 0, n = 0;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				cin >> a[i][j];
		for (int i = 0; i < 3; i++)
		{
			m += a[i][i];
			n += a[i][2 - i];
		}
		cout << m << ' ' << n << endl;
		return 0;
	}
};