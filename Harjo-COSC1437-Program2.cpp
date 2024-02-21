// Program 2 - Due 6_24_2023
// By KariAnn Harjo


#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

const int SIZE = 10;

// Structure MonthBudget
struct MonthBudget {
    double housing;
    double utilities;
    double household_expenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double misc;
};

// C-string array to store the category names
const char* categoryNames[] = {
    "Housing",
    "Utilities",
    "Household Expenses",
    "Transportation",
    "Food",
    "Medical",
    "Insurance",
    "Entertainment",
    "Clothing",
    "Miscellaneous"
};

// Constant array values for budget
const double budget[] = {
    500.00,
    150.00,
    60.00,
    70.00,
    200.00,
    40.00,
    100.00,
    120.00,
    50.00,
    40.00
};

// Function prototypes
void getData(MonthBudget* monthBudget);
void report(const MonthBudget* monthBudget);

int main() {
    // Create a MonthBudget variable
    MonthBudget budget;
    // Call the functions
    getData(&budget);
    report(&budget);
    return 0;
}

// Function that takes a MonthBudget structure pointer variable
// as an input argument and then prints the budget report
void report(const MonthBudget* monthBudget) {
    double total_spent = 0;
    double total_budget = 0;

    for (int index = 0; index < SIZE; index++)
        total_budget += budget[index];

    cout << left << setw(20) << "Category"
        << setw(20) << "Budgeted"
        << setw(20) << "Spent"
        << setw(20) << "Over(-)/Under" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int index = 0; index < SIZE; index++) {
        double difference = budget[index] - *(&monthBudget->housing + index);
        total_spent += *(&monthBudget->housing + index);

        cout << fixed << setprecision(2) << left << setw(20) << categoryNames[index]
            << setw(20) << budget[index]
            << setw(20) << *(&monthBudget->housing + index)
            << setw(20) << difference << endl;
    }

    double overall_difference = total_spent - total_budget;

    if (overall_difference < 0)
        cout << "For the month, you are under budget by $" << -overall_difference << endl;
    else if (overall_difference > 0)
        cout << "For the month, you are above budget by $" << overall_difference << endl;
    else
        cout << "For the month, you are exactly on budget" << endl;
}

// Function that takes a structure pointer variable and prompts the user to enter the values from the keyboard
void getData(MonthBudget* monthBudget) {
    cout << "Enter the amount spent on " << categoryNames[0] << ": ";
    cin >> monthBudget->housing;
    cout << "Enter the amount spent on " << categoryNames[1] << ": ";
    cin >> monthBudget->utilities;
    cout << "Enter the amount spent on " << categoryNames[2] << ": ";
    cin >> monthBudget->household_expenses;
    cout << "Enter the amount spent on " << categoryNames[3] << ": ";
    cin >> monthBudget->transportation;
    cout << "Enter the amount spent on " << categoryNames[4] << ": ";
    cin >> monthBudget->food;
    cout << "Enter the amount spent on " << categoryNames[5] << ": ";
    cin >> monthBudget->medical;
    cout << "Enter the amount spent on " << categoryNames[6] << ": ";
    cin >> monthBudget->insurance;
    cout << "Enter the amount spent on " << categoryNames[7] << ": ";
    cin >> monthBudget->entertainment;
    cout << "Enter the amount spent on " << categoryNames[8] << ": ";
    cin >> monthBudget->clothing;
    cout << "Enter the amount spent on " << categoryNames[9] << ": ";
    cin >> monthBudget->misc;
}
