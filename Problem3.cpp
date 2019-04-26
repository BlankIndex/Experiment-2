#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

	int x, y;
	const float z = 2.5;

	float V;
	

	
	cout << "please input the x value:";
	cin >> x;

	cout << "please input the y value:";
	cin >> y;

	switch (x) {

	case 1: 

		if (y < 1 && y > 5) {

			V = x * y * z;

			cout << "V is" << setw(10) << setprecision(4) << V << endl;
		}
		else if (y >= 5) {
			
			V =x  + (y/z);
			cout << "V is" << setw(10) << setprecision(4) << V << endl;

		}

		break;


	case 2:

		if (y<=5) {
			
			V = abs((x - y) / z);
			cout << "V is" << setw(10) << setprecision(4) << V << endl;


		}
		else if (y>5) {
			

			
			V = x - sqrt(y + z);
			cout << "V is" << setw(10) << setprecision(4) << V << endl;

		}

		break;

	default:
		
		V = x + y + z;
		cout << "V is" << setw(10) << setprecision(4) << V << endl;


	}

	_getch();
	return 0;
}