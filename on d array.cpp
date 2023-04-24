//cpp program to display all elements of an initialised 2D array.
#include <iostream>
using namespace std;

int main()
{

	int i, j;
	int matrix[3][2] = { { 4, 5 }, { 34, 67 }, { 8, 9 } };

	// use of nested for loop
	//access rows of the array.
	for (i = 0; i < 3; i++) {
		// access columns of the array.
		for (j = 0; j < 2; j++) {
			cout << "matrix[" << i << "][" << j
				<< "]=" << matrix[i][j] << endl;
		}
	}
	return 0;
}

