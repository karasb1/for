#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int b = 0; b <= a; b++) {
		if (a % (b * b) == 0 && a % (b * b * b) != 0) {
			cout << b << " ";
		}
	}
	cout << endl;
	return 0;
}