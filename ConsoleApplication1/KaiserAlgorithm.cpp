#include <iostream>
#include <string>
using namespace std;

class KaiserAlgorithm {
private:
	string pwd;
	int key;

public:
	void read() {
		cout << "ÇëÊäÈëÃÜÂë£º\n";
		cin >> pwd;
		cout << "ÇëÊäÈëÆ«ÒÆÁ¿£º\n";
		cin >> key;
	}

	void encrypt() {
		for (int i = 0; i < pwd.length(); i++)
		{
			if (pwd[i] >= 'A' && pwd[i] <= 'Z') {
				pwd[i] = (pwd[i] - 'A' + key) % 26 + 'A';
			}
			else if (pwd[i] >= 'a' && pwd[i] <= 'z') {
				pwd[i] = (pwd[i] - 'a' + key) % 26 + 'a';
			}
		}
		cout << "¼ÓÃÜºóµÄÃÜÂë£º" << pwd << endl;
	}

	void decrypt() {
		int unkey = 26 - key;
		for (int i = 0; i < pwd.length(); i++)
		{
			if (pwd[i] >= 'A' && pwd[i] <= 'Z') {
				pwd[i] = (pwd[i] - 'A' + unkey) % 26 + 'A';
			}
			else if (pwd[i] >= 'a' && pwd[i] <= 'z') {
				pwd[i] = (pwd[i] - 'a' + unkey) % 26 + 'a';
			}
		}
		cout << "½âÃÜºóµÄÃÜÂë£º" << pwd << endl;
	}

	void demo() {
		read();
		encrypt();
		decrypt();
	}

};