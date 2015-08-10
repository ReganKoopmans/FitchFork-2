#ifndef SERIES_H
#define SERIES_H
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


float toRadians(float);

void sinSeries(float, double[], int);
void sinIntSeries(float, double[][2], int);

void cosSeries(float, double[], int);
void cosIntSeries(float, double[][2], int);

void arctanSeries(float, double[], int);
void arctanIntSeries(float, double[][2], int);

//double tangent(float);
//double cosineMinusSine(float);

double addSeries(const double[], int);
double altAddSeries(const double[][2], int);

void printSeries(const double[], int);
void altPrintSeries(const double[][2], int);

int factorial(int);

#endif
