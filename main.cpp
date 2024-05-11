#include <iostream>
using namespace std;

int main()
{
    int a = 0, result = 0, b = 1;
    cout << "Enter your number: ";
    cin >> a;
    for (; a != 0; a /= 10)
    {
        int digit = a % 10;
        if (digit != 3 && digit != 6)
        {
            result += digit * b;
            b *= 10;
        }
    }
    cout << result << endl;

    return 0;
}