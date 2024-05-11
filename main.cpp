#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	cout << "Currency converter" << endl;
	int a = 0, b = 0, c = 0, k = 1;
	cout << "Your account: ";
	cin >> c;
	cout << "Dollar: ";
	cin >> a;
	cout << "Euro: ";
	cin >> b;
	for (;;) {
		cout << "Menu";
		cout << "Conversion to dollars: 1" << endl;
		cout << "Conversion to euros: 2" << endl;
		cout << "Exit: 3" << endl;
		cin >> k;
		if (k == 1) {
			cout << c / a << endl;
		}
		if (k == 2) {
			cout << c / b << endl;
		}
		if (k == 3) {
			break;
		}
	}



	return 0;
}