#include "series.h"

const size_t DIMENSION = 6;

void fill99(double v[])
{
	for(size_t i = 0; i < DIMENSION; i++)
	{
		v[i] = 999;
	}
}
void showValues(const double v[])
{
	for(size_t i = 0; i < DIMENSION; i++)
	{
		cout << v[i] << '\t';
	}
}

int main()	
{ 

	double array[4][DIMENSION] = {{-1,-2,-3,-4,-5,999},{-1,2,-3,4,-5,999},{1,-2,3,-4,5,999},{1,2,3,4,5,999}};
	
	for(size_t i = 0; i < 4; i++)
	{
		printSeries(array[i], DIMENSION-1);
		cout << "---" << endl;
	}
	
	printSeries(array[3],1);
	cout << endl;

	return 0;
}
