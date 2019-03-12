// Yussuf Aisset
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
	int NumberGuess;
	int randomNumber;
 srand (time(NULL));
	randomNumber = rand() % 100 + 1;
	do {
		cout << " guess a number between 1-100" << endl;
		cin >> NumberGuess;

		if (NumberGuess < randomNumber)
			cout << " your guess is too low";

		else if (NumberGuess > randomNumber)
			cout << " your guess is too high";

		else if (NumberGuess = randomNumber)
			break;
	} while (NumberGuess = randomNumber);
	cout << "congratulations  ";

	system("pause");
	return 0;
}
