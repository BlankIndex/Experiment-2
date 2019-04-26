#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int rows, columns;
	
cout << "Enter number of rows: ";
cin >> rows;

cout << "Enter the number of columns: ";
cin >> columns;


// nested loop

for (int y = 1; y <= rows; y++)
{
	for (int x = 1; x <= columns; x++) {

		cout << "*";
	}
	cout << endl;
}

_getch();

return 0;
}