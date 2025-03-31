#include <iostream>
#include <iomanip>  // for controlling output format
#include <string>
using namespace std;

// Function prototypes
void showMenu();
void convertCurrency(double rate, string currency1, string currency2);

int main() {
    double amount;
    int choice;
    
    // Display the menu and ask for user input
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice! Please choose a valid option." << endl;
            continue;
        }

        cout << "Enter amount to convert: ";
        cin >> amount;

        // Call the conversion function based on user choice
        switch (choice) {
            case 1:
                convertCurrency(0.84, "USD", "EUR");  // USD to EUR
                break;
            case 2:
                convertCurrency(1.19, "EUR", "USD");  // EUR to USD
                break;
            case 3:
                convertCurrency(0.74, "USD", "GBP");  // USD to GBP
                break;
            case 4:
                convertCurrency(1.36, "GBP", "USD");  // GBP to USD
                break;
        }
    } while (choice != 0);  // Loop until user chooses to exit

    cout << "Thank you for using the Currency Converter!" << endl;
    return 0;
}

// Function to display the menu
void showMenu() {
    cout << "\nCurrency Converter" << endl;
    cout << "----------------------------" << endl;
    cout << "1. Convert USD to EUR" << endl;
    cout << "2. Convert EUR to USD" << endl;
    cout << "3. Convert USD to GBP" << endl;
    cout << "4. Convert GBP to USD" << endl;
    cout << "0. Exit" << endl;
    cout << "----------------------------" << endl;
}

// Function to convert currency based on conversion rate
void convertCurrency(double rate, string currency1, string currency2) {
    double amount, result;

    cout << "Enter the amount in " << currency1 << ": ";
    cin >> amount;

    result = amount * rate;  // Conversion calculation

    cout << fixed << setprecision(2);  // Format the result to 2 decimal places
    cout << amount << " " << currency1 << " = " << result << " " << currency2 << endl;
}
