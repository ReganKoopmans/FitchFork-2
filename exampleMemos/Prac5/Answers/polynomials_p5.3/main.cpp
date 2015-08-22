#include <iostream>
#include "polynomials.h"
using namespace std;

int main()	{
	int s1, s2, s3;
	const int MAXI = 3; 
	cout<<"Enter the highest order of the first polynomial: ";
	cin>>s1;
	int p[++s1];
	cout<<"Enter the coefficients of the first polynomial p(x): ";
	for(int x=0; x<s1; x++)	cin>>p[x];
	
	cout<<"Enter the highest order of the second polynomial: ";
	cin>>s2;
	int q[++s2];
	cout<<"Enter the coefficients of the second polynomial p(x): ";
	for(int x=0; x<s2; x++)	cin>>q[x];

	(s1>s2) ? s3=s1 : s3=s2;
	int r[s3];
	unsigned size;
	(s1<s2) ? size=s1 : size=s2;
	add(p,s1,q,s2,r,s3);
	cout<<"The sum of p(x) and q(x) is: ";
	printPoly(r,s3);

	subtract(p,s1,q,s2,r,s3);
	cout<<"The difference between p(x) and q(x) is: ";
	printPoly(r,s3);

	multiply(p,s1, 3);
	cout<<"The product of p(x) and q(x) is: ";
	printPoly(p,s1);
	
	return 0;
}
