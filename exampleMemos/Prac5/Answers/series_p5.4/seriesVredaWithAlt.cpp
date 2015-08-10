#include "seriesVreda.h"

int factorial(int x)	{
	if(x<0) return -1;		//-1 for non existing factorial for negatives
	if (x==0)	return 1;
	return x * factorial(x-1);
}

long double addSeries(const double v[], int t, bool alternate)
{
	double total = 0;
	for(int i = 0; i < t; i++)
	{
		total += v[i];
	}
	return total;
}

void printSeries(const long double v[], int t, bool alternate)
{
	cout << " = ";
	for(int i = 0; i < t - 1; i++)
	{
		cout << v[i] << ((alternate && i % 2 == 0)?" - ":" + ");
	}
	cout << v[t - 1] << endl;
}
	
void eSeries(float x, long double v[], int t)
{
	for(int i = 0; i < t ; i++)
	{
		v[i] = pow(x, i) / factorial(i);
	}
	
}

void printSeries(const double v[][2], int t, bool alternate)
{
	for(int i = 0; i < t - 1; i++)
	{
		cout << setw(11) << v[i][0];
	}
	cout << setw(11) << v[t - 1][0] << endl << "    ";
	for(int i = 0; i < t - 1; i++)
	{
		cout << "--------" << ((alternate && i % 2 == 0)?" - ":" + ");
	}
	cout << "--------" << endl;
	for(int i = 0; i < t - 1; i++)
	{
		cout << right << setw(11) <<  v[i][1];
	}
	cout << setw(11)  << v[t - 1][1] << endl;
}
	
void eSeries(float x, double v[][2], int t)
{
	for(int i = 0; i < t ; i++)
	{
		v[i][0] = pow(x,i);
		v[i][1] = factorial(i);
	}
	
}