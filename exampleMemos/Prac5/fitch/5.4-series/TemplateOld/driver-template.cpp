#include "template.h"   //An h-file containing the prototype of the function

/** I create arrays of size DIMENSION 
      I call the function with dimension DEMEINSION-1
      This way I can see when they go out of bounds by writing
      in the last cell without crashing the program
*/
const size_t DIMENSION = 5;

/**
Output all the elements in the array seperated by tabs.

I use this instead of a full fledged printing function to simply the
FF regexes to verift the values in the array.

Ideally the students' print function should NOT be used for this 
purpose because if their print function is wrong they will also
loose all marks related to the values in the array
*/
void showValues(const double v[])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		cout << v[i] << '\t';
	}
}

/**
Fill the entite array with 999.

I call this before I call their function that should initiate the array.
After the students' program initiated the array I can see which cells
were untouced and which wer actually initiated including cells that were
initiated with 0.
*/

void fill99(double v[])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		v[i] = 999;
	}
}

/*
 This program output a row containing the content of the 
 array after calling the function for each of 6 test cases.

 stdFunc is the name of the student function being tested
*/
int main()	
{ 
	double array[DIMENSION];	
	// These are my test case values for x :
	double x[4] = {0.3, 1, -0.2, 0}; 
	for(int i = 0; i < 4; i++)
	{
		fill99(array);
		stdFunc(x[i], array, DEMENSION - 1); 
		showValues(array);
		cout << "---" << endl;
	}
	// Here I call the function with array sizes 1 and 0 
	// with x being my last mentioned test value
	for(int i = 1; i >= 0; i--)
	{
		fill99(array);
		stdFunc(x[3], array, i);
		showValues(array);
		cout << "---" << endl;
	}	
	return 0;
}
