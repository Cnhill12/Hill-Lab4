#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int number;
	int total = 1;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> number;
	
	while (number < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> number;
	}
	cout << number << "! = ";

	for (int x = 1; x <= number; x++) {
		total *= x;
	}

	for (int x = 1; x < number; x++) {
		cout << x << " * ";
	}

	cout << number << " = " << total;
}
void arithmetic() {
	int start;
	int pattern;
	int series;
	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to add each time: ";
	cin >> pattern;
	cout << "Enter a number of elements in the series: ";
	cin >> series;

	int total = start;
	cout << start;

	for (int x = 1; x < series; x++) {
		start += pattern;
		total += start;
		cout << " + " << start;
	}
	cout << " = " << total;
}
void geometric() {
	int start;
	int factor;
	int series;
	int sequence;
	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> start;
	cout << "Enter a number to multiply by each time: ";
	cin >> factor;
	cout << "Enter the number of elements in the series: ";
	cin >> series;

	cout << start;
	int total = start;

	for (int x = 1; x < series; x++) {
		sequence = start * pow(factor,x);
		total += sequence;
		cout << " + " << sequence;
	}

	cout << " = " << total;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "\nGo Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
