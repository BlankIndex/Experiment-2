#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {

	double waterbill,consumptionUse, lateCharge,lastmonth;
	int gallons;

	cout << "How much is your remaining balance from the previous months:";
	cin >> lastmonth;

	cout << "how much gallons were used this month";
	cin >> gallons;

	consumptionUse = (gallons*1.10) + 35;

	if(lastmonth > 0){
		lateCharge = lastmonth + 20;
	}
	else
		lateCharge = lastmonth;


	
	waterbill = lateCharge + consumptionUse;

	cout << "Your bill is " << setprecision(4) << waterbill;

	_getch();
	return 0;
}