#include "series.h"


const float PI=3.14159265;

float toRadians(float y)	{
	return (y*PI)/180;
}


void sinSeries(float x, double v[], int t)	{
	for(unsigned p=0; p<t;p++)
		(p%2==0) ? v[p] = (pow(x,(2*p+1))/factorial(2*p+1))  : v[p] = -(pow(x,(2*p+1))/factorial(2*p+1));
}
void sinIntSeries(float x, double v[][2], int t)	{
	for(unsigned p=0; p<t;p++)	{
		(p%2==0) ? v[p][0] = pow(x,(2*p+1)) : v[p][0] = -pow(x,(2*p+1));
		v[p][1] = factorial(2*p+1);  
	}
}

void cosSeries(float x, double v[], int t)	{
	for(unsigned p=0; p<t;p++)
		(p%2==0) ? v[p] = (pow(x,2*p)/factorial(2*p))  : v[p]= -(pow(x,2*p)/factorial(2*p));
}
void cosIntSeries(float x, double v[][2], int t)	{
	for(unsigned p=0; p<t;p++)	{
		(p%2==0) ? v[p][0] = pow(x,2*p) : v[p][0] = -pow(x,2*p);
		v[p][1] = factorial(2*p);  
	}
}

void arctanSeries(float x, double v[], int t)	{
	for(unsigned p=0; p<t;p++)
		(p%2==0) ? v[p] += pow(x,(2*p+1))/(2*p+1)  : v[p] -= pow(x,(2*p+1))/(2*p+1);
}
void arctanIntSeries(float x, double v[][2], int t)	{
	for(unsigned p=0; p<t;p++)	{
		(p%2==0) ? v[p][0] += pow(x,(2*p+1))  : v[p][0] = -pow(x,(2*p+1))/(2*p+1);
		v[p][1] = 2*p+1;
	}
}

//double tangent(float x, int t)	{	return sine(x)/cosine(x);	}

//double cosineMinusSine(float y)	{
//	return sine(y) - cosine(y-(PI/2));
//}

double addSeries(const double v[], int t)	{
	float accumulator=0;
	for(unsigned p=0; p<t; p++)	
		accumulator +=v[p];	
	return accumulator;
}
double altAddSeries(const double v[][2], int t)	{
	float accumulator=0;
	for(unsigned p=0; p<t; p++)	
		accumulator += v[0][p]/v[1][p];
	return accumulator;
}

void printSeries(const double v[], int t)	{
	if(t>=1)	cout<<setw(5)<<setprecision(3)<<v[0];
	for(unsigned p=1; p<t; p++)	
		cout<<"+"<<setw(5)<<setprecision(3)<<v[p];
	cout<<"="<<addSeries(v,t)<<endl;
}
void altPrintSeries(const double v[][2], int t)	{
	for(unsigned p=0; p<t; p++)	
		cout<<setw(5)<<setprecision(3)<<v[p][0]<<"\t";
	for(unsigned p=0; p<t-1; p++)	
		cout<<"---- + ";
	cout<<"----- = "<<altAddSeries(v,t)<<endl;
	for(unsigned p=0; p<t; p++)	
		cout<<setw(5)<<setprecision(3)<<v[p][1]<<"\t";
}

int factorial(int x)	{
	if(x<0) return -1;		//-1 for non existing factorial for negatives
	if (x==0)	return 1;
	return x * factorial(x-1);
}

