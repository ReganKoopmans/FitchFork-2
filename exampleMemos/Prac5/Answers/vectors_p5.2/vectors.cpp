/* Hannes Janse van Vuuren 2015 UP CS dept */
#include "vectors.h"
#include <iostream>
#include <cmath>

typedef int dt;

void printVector(const dt v[], size_t len) 
{
	using std::cout;
	cout << "[ ";
	size_t i;
	for (i=0; i<len-1; i++)
		cout << v[i] << ", ";
	cout << v[i] << " ]";
}

bool equalVectors(const dt v1[], const dt v2[], size_t len)
{
	for (size_t i=0; i<len; i++)
		if (v1[i] != v2[i])
			return false;
	return true;
}

void addVectors(const dt v1[], const dt v2[], dt r[], size_t len)
{
	for (size_t i=0; i<len; i++)
		r[i] = v1[i] + v2[i];
}

void subtractVectors(const dt v1[], const dt v2[], dt r[], size_t len)
{
	for (size_t i=0; i<len; i++)
		r[i] = v1[i] - v2[i];
}

double magnitude(const dt v[], size_t len)
{
	double r = 0;
	for (size_t i=0; i<len; i++)
		r += pow(v[i], 2);
	r = sqrt(r);
	return r;
}

dt dotProduct(const dt v1[], const dt v2[], size_t len)
{
	dt r = dt();
	for (size_t i=0; i<len; i++)
		r += v1[i] * v2[i];
	return r;
}

