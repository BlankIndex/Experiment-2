#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int a, b, c;

	cout << "please input the first integer" << endl;
	cin >> a;

	cout << "pleae input the second integer" << endl;
	cin >> b;

	cout << "please input the third integer" << endl;
	cin >> c;

	if (a >= b && a >= c) {
		cout << "The largest number is " << a;
	}
	else if (b >= a && b >= c) {

		cout << "The largest number is " << b;


	}
	else if (c >= b && c >= a) {

		cout << "The largest number is " << c;

	}
	else

		cout << "invalid" << endl;

	_getch();

	return 0;
}