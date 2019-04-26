#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	int start, last, x, y ,xtransform , ytransform;

	start = 0;
	last = 20;
	x = 0;
	y = 1;
	


	while (start < last) {

		//loop counter
		start = start + 1;

		//fibonacci sequence transforms

		xtransform = x;
		ytransform = y;
		x = ytransform;
		y = ytransform + xtransform;

		cout << y << ",";
		


	}


	_getch();

	return 0;
}
