#include "seriesVreda.h"

const int TERM_MAX = 10;

int main()	
{ 
	double x;
	cout << "Enter a value belonging to (-1, 1]: ";
	cin >> x;
	
	cout << "1. Calculate e^" << x << endl;
	cout << "2. Calculate ln(1 + " << x << ")" << endl;
	cout << "Enter your choice: ";
	int choice;
	cin >> choice;
	if(!(choice == 1 || choice == 2))
	{
		cout << "Invalid choice" << endl;
		return 1;
	}
	
	cout << "Enter the number of terms: ";
	int t;
	cin >> t;
	if (t < 0)
	{
		cout << "Cannot have a negative number of terms" << endl;
		return 1;
	}

	double array[t];
	double detail[t][2];
	
	switch(choice)
	{
		case 1 : 	
			eSeries(x, array, t);
			eSeries(x, detail, t);
			cout << "e^" << x << " = " ; 
			break;
		case 2 : 	
			lnSeries(x, array, t);
			lnSeries(x, detail, t);
			cout << "ln(1 + " << x << ") = " ;
	}
	
	if(t <= TERM_MAX)
	{
		cout << endl;
		printSeries(detail, t);
		cout << endl << " = ";
	}
	
	printSeries(array, t);
	cout << setprecision(12) << fixed;
	cout << " = " << addSeries(array, t) << endl;
	
	switch(choice)
	{
		case 1: 
			cout << "When using the cmath constant and pow function: " << endl;
			cout << "e^" << x <<" = " << pow(M_E, x) << endl; break;
		case 2: 
			cout << "When using the cmath log function: " << endl;
			cout << "ln(1 + " << x << ") = " << log(1 + x) << endl;
	}
	return 0;
}
