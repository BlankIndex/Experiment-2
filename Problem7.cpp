#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int n,y;


	
	do {

		cout << "Please enter a number" << endl;
		cin >> n;

		//catch 0
		if (n == 0) {

			cout << endl;
			cout << "Thank you" << endl;

			_getch();
			return 0;
		}

		else

		//using Gauss arithmetic sum
		
		y = (n*(n+1))/2;

		cout << "the sum of all whole numbers from 1 to " << n << " is " << y << endl;
		cout << endl;

	} while (n != 0);
	

	


	_getch();
	
	
	return 0;
}