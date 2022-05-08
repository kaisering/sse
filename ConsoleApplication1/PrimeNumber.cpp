#include <iostream>
#include <math.h>
using namespace std;

class PrimeNumber
{
public:
	int read() {
		int num;
		cout << "请输入一个正整数：\n";
		cin >> num;
		return num;
	}

	void isPrimeNumber() {
		int num;
		num = read();
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0) {
				cout << num << "不是素数！\n";
				return;
			}
		}

		if (num > 1) {
			cout << num << "是素数！\n";
		}
		else {
			cout << num << "不是素数！\n";
		}
	}

	void isPrimeNumber01() {
		int num;
		num = read();
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) {
				cout << num << "不是素数！\n";
				return;
			}
		}

		if (num > 1) {
			cout << num << "是素数！\n";
		}
		else {
			cout << num << "不是素数！\n";
		}
	}

};

