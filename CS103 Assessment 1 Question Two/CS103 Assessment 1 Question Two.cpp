//CS103 Assessment One Question Two
//Student Name: Matt Taylor
//This program sums the non-negative values in a list as per the brief 

#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of non-negative values in an array 
int sumNonNegative(vector<int>& arr, int size) {
    int sum = 0; // Initialize a variable to store the sum
    // Iterate through the elements of the array
    for (int i = 0; i < size; i++) {
        // Check if the current element is non-negative
        if (arr[i] >= 0) {
            // If the element is non-negative, add it to the sum
            sum += arr[i];
        }
    }
    return sum; // Return the sum of non-negative values
}

int main()
{
    int size;
    // Asks the user to enter the size of the list
    cout << "Enter the size of the List: ";
    cin >> size;

    vector<int> list(size); // Declares the size of the array at a specified size

    // Prompts the user to enter the elements of the array
    cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        cin >> list[i]; // Reads the elements from the user
    }

    // This calls the sumNonNegative function to calculate the sum of non-negative values
    int result = sumNonNegative(list, size);
    cout << "Sum of non-negative values: " << result << std::endl;

    return 0;
}
