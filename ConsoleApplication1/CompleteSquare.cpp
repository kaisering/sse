#include <iostream>
#include <math.h>
using namespace std;

class CompleteSquare
{
public:
	int read() {
		int num;
		cout << "请输入一个正整数：\n";
		cin >> num;
		return num;
	}

	void isCompelteSquare() {
		int num, x;
		double sr;
		num = read();
		x = sr = sqrt(num);
		if (x == sr) {
			cout << num << "是完全平方数！\n";
		}
		else
		{
			cout << num << "不是完全平方数！\n";
		}
	}

	void isCompelteSquare01() {
		bool flag = false;
		int num = read();
		if (num == 1 || num == 4) { cout << num << "是完全平方数！\n"; }
		for (double i = 3; i < num / 2; i++) {
			if (num / i == i) {
				cout << num << "是完全平方数！\n";
				break;
			}
			if (num / i < i) {
				cout << num << "不是完全平方数！\n";
				break;
			}

		}

	}

};

