#include <iostream>

using namespace std;

// Function template for calculating the total
template<typename T>
T calculateTotal(int numValues) {
    T sum = 0;
    T value;

    for (int i = 0; i < numValues; i++) {
        cout << "Enter a value: ";
        cin >> value;
        sum += value;
    }

    return sum;
}

int main() {
    // Test the calculateTotal function template with integer and floating-point numbers

    // Test with integers
    int numIntegers;
    cout << "Enter the number of integers you wish to total: ";
    cin >> numIntegers;
    int intTotal = calculateTotal<int>(numIntegers);
    cout << "Total of integers: " << intTotal << endl << endl;

    // Test with floating-point numbers
    int numFloats;
    cout << "Enter the number of floats you wish to total: ";
    cin >> numFloats;
    float floatTotal = calculateTotal<float>(numFloats);
    cout << "Total of floats: " << floatTotal << endl;

    return 0;
}
