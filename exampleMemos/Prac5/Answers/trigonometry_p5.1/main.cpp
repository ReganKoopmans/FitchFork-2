#include "series.h"


const unsigned MAX_TERMS = 20;
int main()	{
	float angle, rads;
	cout << "Enter an angle in degrees: ";
	cin >> angle;

	cout << "1. Calculate sin(" << angle << ")" << endl; 
	cout << "2. Calculate cos(" << angle << ")" << endl; 
	cout << "3. Calculate tan(" << angle << ")" << endl; 
	cout << "Enter your choice: ";
	int choice;
	cin >> choice;

	if (!(choice == 1 || choice == 2 || choice == 3)){
		cout << "Invalid choice" << endl;
		return 0;
	}

	rads = toRadians(angle);
	int terms;
	cout << "Enter the number of terms to use in series: ";
	cin >> terms;
	if (terms < 0) {
		cout << "Cannot have a negative number of terms" << endl;
		return 0;
	}
	
	double seriesArray[MAX_TERMS];
	
	switch (choice){
		case 1: 
			sinSeries(rads, seriesArray, terms);
			cout << "sin(" << angle << ") = ";
			printSeries(seriesArray, terms);
			cout << " = " << sumOfSeries(seriesArray, terms) << endl;
			break;
		case 2: 
			cosSeries(rads, seriesArray, terms);
			cout << "cos(" << angle << ") = ";
			printSeries(seriesArray, terms);
			cout << " = " << sumOfSeries(seriesArray, terms) << endl;
			break;
		case 3:
			double seriesArray2[MAX_TERMS];
			tanSeries(rads, seriesArray, seriesArray2, terms);			
			cout << "tan(" << angle << ") = " << endl;
			printSeries(seriesArray, terms);
			cout << endl;
			for (size_t i = 0; i < terms; i++){
				cout << "------------";
			}
			cout << endl;
			printSeries(seriesArray2, terms);
			cout << "\n= " << sumOfSeries(seriesArray, terms) / sumOfSeries(seriesArray2, terms) << endl;
	}
	
	switch(choice)
	{
		case 1:
			cout << "When using the cmath sin function: " << endl;
			cout << "sin(" << angle << ") = " << sin(rads) << endl;
			break;
		case 2:
			cout << "When using the cmath cos function: " << endl;
			cout << "cos(" << angle << ") = " << cos(rads) << endl;
			break;
		case 3:
			cout << "When using the cmath tan function: " << endl;
			cout << "tan(" << angle << ") = " << tan(rads) << endl;
	}
		
	return 0;
}
