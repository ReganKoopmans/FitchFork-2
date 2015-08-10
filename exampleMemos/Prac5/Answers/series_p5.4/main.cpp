#include<iostream>
#include "series.h"
using namespace std;

int main()	{ 
	float angle, rads;
	cout<<"Enter an angle in degrees mode: ";
	cin>>angle;
	rads=toRadians(angle);
	int size;
	cout<<"Enter the number of terms for the series: ";
	cin>>size;
	double sine[size], cosi[size], arctan[size];
	sinSeries(rads, sine, size);
	cosSeries(rads, cosi, size);
	arctanSeries(rads, arctan, size);
	cout<<angle<<" degrees is converted to "<<rads<<" radians"<<endl;
	cout<<"Sine("<<angle<<") is: "<<setw(5)<<setprecision(3)<<addSeries(sine, size)<<endl;
	cout<<"Cosine("<<angle<<") is: "<<setw(5)<<setprecision(3)<<addSeries(cosi, size)<<endl;
	//cout<<"Cos("<<angle<<") is "<<setw(5)<<setprecision(3)cosine(rads)<<endl;
	//cout<<"The difference between sin(x) and cos(x-PI/2) is: "<<cosineMinusSine(rads)<<endl;
	return 0;
}
