#include <iostream>
#include <math.h>
using namespace std;

class CompleteSquare
{
public:
	int read() {
		int num;
		cout << "������һ����������\n";
		cin >> num;
		return num;
	}

	void isCompelteSquare() {
		int num, x;
		double sr;
		num = read();
		x = sr = sqrt(num);
		if (x == sr) {
			cout << num << "����ȫƽ������\n";
		}
		else
		{
			cout << num << "������ȫƽ������\n";
		}
	}

	void isCompelteSquare01() {
		bool flag = false;
		int num = read();
		if (num == 1 || num == 4) { cout << num << "����ȫƽ������\n"; }
		for (double i = 3; i < num / 2; i++) {
			if (num / i == i) {
				cout << num << "����ȫƽ������\n";
				break;
			}
			if (num / i < i) {
				cout << num << "������ȫƽ������\n";
				break;
			}

		}

	}

};

