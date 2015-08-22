/* Hannes Janse van Vuuren 2015 UP CS dept */
#include <iostream>
#include "vectors.h"
#include <cstdlib>

#include "inputVector.cpp"
/* yes, it isn't fantastic practice to include cpp files directly, I know */

int main()
{
	using namespace std;
	cout << "Enter the number of dimensions of the vectors: ";
	size_t dimensions;
	cin >> dimensions;
	if (dimensions < 1) {
		cout << "Error: dimensions should be greater than 0\n";
		return 1;
	}
	int p[dimensions], q[dimensions], r[dimensions];
	cout << "Enter the elements for vector p: ";
	inputVector(p, dimensions);
	cout << "Enter the elements for vector q: ";
	inputVector(q, dimensions);
	
	cout << "The sum of p and q is: ";
	add(p, q, r, dimensions);
	printVector(r, dimensions);
	cout << endl;

	cout << "The difference p-q is: ";
	subtract(p, q, r, dimensions);
	printVector(r, dimensions);
	cout << endl;

	cout << "The magnitude of p is: "
		<< magnitude(p, dimensions)
		<< endl;

	cout << "The vectors p and q are: "
		<< (equalVectors(p, q, dimensions) ? "EQUAL" : "NOT EQUAL")
		<< endl;

	cout << "The dot product of p and q is: "
		<< dotProduct(p, q, dimensions)
		<< endl;
	return 0;
}

