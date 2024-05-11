#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int k = 0;
	for (int i = 100; i <= 999; i++) {
		if (i / 100 != i % 100 / 10 && i / 100 != i % 10 && i % 100 / 10 != i / 100) {
			k++;
		}
	}
	cout << k << endl;
	return 0;
}