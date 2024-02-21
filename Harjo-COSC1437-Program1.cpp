// Harjo-COSC1437-Program1.cpp 
// Program 1 - Due 6-17-2023
// By KariAnn Harjo


#include <iostream>
using namespace std;

// Function to create a copy of the array with reversed element values
int* reverseArray(int arr[], int size) {
    int* newArr = new int[size]; // Create a new array dynamically
    for (int element = 0; element < size; element++) {
        newArr[element] = arr[size - 1 - element]; // Copy elements in reverse order
    }
    return newArr; // Return the pointer to the new array
}

int main() {
    cout << "Array Reversal Program" << endl;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Create the original array dynamically

    cout << "Enter the elements of the array: ";
    for (int element = 0; element < size; element++) {
        cin >> arr[element];
    }

    int* reversedArr = reverseArray(arr, size); // Get the reversed array

    cout << "Original array: "; // Print the original array

    for (int element = 0; element < size; element++) {
        cout << arr[element] << " ";
    }
    cout << endl;

    cout << "Reversed array: "; // Print the reversed array

    for (int element = 0; element < size; element++) {
        cout << reversedArr[element] << " ";
    }
    cout << endl;

    delete[] arr; // Deallocate memory for the original array
    delete[] reversedArr; // Deallocate memory for the reversed array

    return 0;
}
