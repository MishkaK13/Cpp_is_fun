#include <iostream>

using namespace std;

int main() {

	setlocale(0, "");
	int choice, counter, minNumber, maxNumber, x, y, answer, correctCount = 0;
	cout << "\t Math check!!!";
	cout << "\t How well can you multiply numbers?\n Let's find out :)\n";
	cout << "Please, enter the test mode(1 for easy, 2 for medium, 3 for hard): ";
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "You've choosen easy level!\n";
		counter = 5;
		minNumber = 0;
		maxNumber = 4;
		break;
	}
	case 2: {
		cout << "You've choosen medium level!\n";
		counter = 8;
		minNumber = 0;
		maxNumber = 4;
		break;
	}
	case 3: {
		cout << "You've choosen hard level!\n";
		counter = 10;
		minNumber = 0;
		maxNumber = 4;
		break;
	}
	default:
	{
		cout << "Please, enter correct number!";
		break;
	}
	}
	for (int i = 0; i < counter; i++) {
		x = rand() % maxNumber + minNumber;
		y = rand() % maxNumber + minNumber;
		cout << x << " * " << y << " = ";
		cin >> answer;

		if (x * y == answer) {
			correctCount++;
		}
	}
	cout << "The test has been finished! You've answered correctly " << correctCount << " out of " << counter << ".\n\n\n\n";
	system("pause");
	return 0;
}