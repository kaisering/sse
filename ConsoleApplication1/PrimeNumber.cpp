#include <iostream>
#include <math.h>
using namespace std;

class PrimeNumber
{
public:
	int read() {
		int num;
		cout << "������һ����������\n";
		cin >> num;
		return num;
	}

	void isPrimeNumber() {
		int num;
		num = read();
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0) {
				cout << num << "����������\n";
				return;
			}
		}

		if (num > 1) {
			cout << num << "��������\n";
		}
		else {
			cout << num << "����������\n";
		}
	}

	void isPrimeNumber01() {
		int num;
		num = read();
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) {
				cout << num << "����������\n";
				return;
			}
		}

		if (num > 1) {
			cout << num << "��������\n";
		}
		else {
			cout << num << "����������\n";
		}
	}

};

