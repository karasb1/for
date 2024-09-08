#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, s = 0;
	cin >> a;
	for (int b = a; b > 0; b /= 10 ) {
		s += b % 10;
	}
	if (s * s * s = a * a) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}