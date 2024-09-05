#include <iostream>
using namespace std;


void printDivisors(int num) {
    cout << "The divisors of " << num << " in decreasing order are:" << endl;
    for (int i = num; i > 0; --i) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {

    int number;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer," << endl;
    cout << "the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    do {
        do {
            cout << "Please enter a positive integer number: ";
            cin >> number;
            if (number <= 0) {
                cout << number << " is not a positive integer number." << endl;
            }
        } while (number <= 0);

        printDivisors(number);

        do {
            cout << "Would you like to see the divisors of another integer number (Y/N)? ";
            cin >> choice;
            if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
                cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            }
        } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');

    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the program. Goodbye!" << endl;
    return 0;
}