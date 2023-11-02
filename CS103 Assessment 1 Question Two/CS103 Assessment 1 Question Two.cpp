//CS103 Assessment One Question Two
//Student Name: Matt Taylor
// This program sums the non-negative values in a list as per the brief 

#include <iostream>
using namespace std;

//Creation of array and size function that takes arry and size as parameters
//The calculation of the non negatives is here as well. 
int sunNonNegative(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > = 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int main()
{
   


	return 0;
}

