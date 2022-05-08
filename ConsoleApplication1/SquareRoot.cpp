#include<iostream>
using namespace std;

class SquareRoot
{
public:
	void show() {
		cout << "请输入N的值将求出前平方根:";
		double n, x1, x2;
		cin>>n;
		x2 = 1.0;
		while (1) {
			x1 = x2;
			x2 = (x1 + n / x1) / 2.0;
			if (fabs(x1 - x2) < 0.00001) {
				cout << ("%.1f", x2);
				break;
			}
		}
		cout << endl;
	}

};