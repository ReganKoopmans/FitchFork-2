/* Hannes Janse van Vuuren 2015 UP CS dept */
#ifndef VECTORS_H
#define VECTORS_H

#include <cstddef>

bool equalVectors(const int v1[], const int v2[], size_t len);
void printVector(const int v[], size_t len);
void addVectors(const int v1[], const int v2[], int r[], size_t len); 
void subtractVectors(const int v1[], const int v2[], int r[], size_t len);
double magnitude(const int v[], size_t len);
int dotProduct(const int v1[], const int v2[], size_t len);

#endif
