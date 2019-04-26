#include <iostream>
#include <conio.h>

using namespace std;
int main(){

	int i;
	i = 0;

		while (i < 10){

			i = i + 1; 

			cout << i <<",";
		}

		while (i >= 10 && i < 30) {
			
			i = 2 + i;

		cout <<i<<",";
		}

		
	_getch();
	return 0;
}