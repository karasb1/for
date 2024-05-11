#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int main(){
	srand((unsigned int)time(0));
	int number = rand() % 500 + 1;
	int a = 0, k = 0;
	for (;;) {
		cin >> a;
		if (a == number) {
			cout << "You guessed it " << ++k << endl;
			break;
		}
		if (a < number) {
			cout << "More" << endl;
			k++;
		}
		if (a > number) {
			cout << "Less" << endl;
			k++;
		}
		if (a == 0) {
			cout << "Game over" << endl;
		}
	}
	return 0;
}