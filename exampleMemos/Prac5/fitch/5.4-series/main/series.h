#ifndef SERIES_H
#define SERIES_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int factorial(int n);
double sumOfSeries(const double v[], size_t t);
void eSeries(double x, double v[], size_t t);
void eSeries(double x, double v[][2], size_t t);
void lnSeries(double x, double v[], size_t t);
void lnSeries(double x, double v[][2], size_t t);
void printSeries(const double v[], size_t t);
void printSeries(const double v[][2], size_t t);
double sumOfSeries(const double v[], size_t t);

#endif