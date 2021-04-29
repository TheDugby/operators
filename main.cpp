#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int numb_1 = 18;
	int numb_2 = 4;

	cout << "Число_1 = " << numb_1 << endl;
	cout << "Число_2 = " << numb_2 << endl;
	cout << "Число_1 + Число_2 = " << numb_1 + numb_2 << endl;
	cout << "Число_1 - Число_2 = " << numb_1 - numb_2 << endl;
	cout << "Число_1 * Число_2 = " << numb_1 * numb_2 << endl;
	cout << "Число_1 / Число_2 = " << numb_1 / numb_2 << endl;
	cout << "Число_1 % Число_2 = " << numb_1 % numb_2 << endl;
	cout << endl;

	return 0;
}
