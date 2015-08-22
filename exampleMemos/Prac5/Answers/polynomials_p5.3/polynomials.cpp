#include "polynomials.h"


void add(const int p[], int s1, const int q[], int s2, int r[], int s3)	{
	unsigned mini=min(s1,s2);
	unsigned maxi=max(s1,s2);
	for(unsigned x = 0; x < mini; x++)	
		r[x] = p[x] + q[x];
	
	if((maxi==s1) && (mini!=maxi))	
		for(unsigned x = 0; x < maxi; x++)	
			r[x] = p[x];
	if((maxi==s2) && (mini!=maxi))	
		for(unsigned x = 0; x < maxi; x++)	
			r[x] = q[x];
}

void subtract(const int p[], int s1, const int q[], int s2, int r[], int s3)	{
	unsigned mini=min(s1,s2);
	unsigned maxi=max(s1,s2);
	for(unsigned x = 0; x < mini; x++)	
		r[x] = p[x] - q[x];
	if((maxi==s1) && (mini!=maxi))	
		for(unsigned x = 0; x < maxi; x++)	
			r[x] = p[x];
	if((maxi==s2) && (mini!=maxi))	
		for(unsigned x = 0; x < maxi; x++)	
			r[x] = q[x];
}

void multiply(int p[], int s1, int scalar, int r[])	{
	for(unsigned x = 0; x < s1; x++)
		r[x] = p[x]*scalar;
}

void printPoly(int r[], int s)	{
	if(s>=1)	cout<<r[0]<<"x^"<<0;
	for(unsigned x=1; x<s; x++)
		cout<<" +"<<r[x]<<"x^"<<x;
	cout<<endl;
}
