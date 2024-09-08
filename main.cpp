#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int b = 1; b <= a; b++) {
		if (a % b == 0) {
			cout << b << " ";
		}
	}
	return 0;
}