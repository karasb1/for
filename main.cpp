#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	if (b > a) {
		c = b;
		b = a;
		a = c;
	}
	for (int i = 1; i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			cout << i << " ";
		}
	}
	return 0;
}