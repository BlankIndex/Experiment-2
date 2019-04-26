#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

int main() {


	char package;
	int hours;
	double monthlybill;


	cout << "please enter the type of plan" << endl;
	
	cin >> package;
//package A
	if (package == 'A' || package == 'a')
	{
		int multiplier;

		cout << "please input the number of hours used" << endl;
		cin >> hours;

		if (hours <= 10)
		{
			monthlybill = 995;
			cout << "your monthly bill is " << monthlybill << endl;
		}
		else if (hours > 10) {

			multiplier = (hours - 10) * 20;
			monthlybill = 995 + multiplier;
			cout << "your monthly bill is " << monthlybill << endl;

		}
	}

	//package B
	else if (package == 'B' || package == 'b')
	{

		int multiplier;

		cout << "please input the number of hours used" << endl;
		cin >> hours;

		if (hours <= 20)
		{
			monthlybill = 1495;
			cout << "your monthly bill is " << monthlybill << endl;
		}
		else if (hours > 20) {

			multiplier = (hours - 20) * 10;
			monthlybill = 1495 + multiplier;
			cout << "your monthly bill is " << monthlybill << endl;
			
		}
	}

	//package C

	else if (package == 'C' || package == 'c') {

		cout << "your monthly bill is " << 1995 << endl;

	}

	//error catching
	else
		cout << "INVALID PLAN! please choose only between A, B or C" << endl;

	_getch();

	return 0;

}