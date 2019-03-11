//Kevin Castillo
//2019 Spring Semester Beginning Programming
// Celcius to Fahrenheit table

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

		double firstTemp, secondTemp;
		double F;
		cout << "Please enter the first temperature: ";
		cin >> firstTemp;
		cout << "Please enter the second temperature: ";
		cin >> secondTemp;

		int start_Table = (int)firstTemp;
		int end_Table = (int)secondTemp;

		for (start_Table = (int)firstTemp; start_Table <= end_Table + 1; start_Table++)
		cout << left << start_Table << "C" << right << setw(25) << fixed << setprecision(2) << showpoint << (1.8 * start_Table) + 32 << "F" << endl;

		if (secondTemp < firstTemp) {
			for (end_Table = (int)secondTemp; end_Table <= start_Table+ 1; end_Table++)
			cout << left << end_Table << "C" << right << setw(25) << fixed << setprecision(2) << showpoint << (1.8 * end_Table) + 32 << "F" << endl;
		}
		
		
		return 0;
	}


