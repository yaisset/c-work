//yussuf
#include <iostream>
using namespace std;

int main()
{
	int suite;
	int totalsuites = 0;
	int floor = 10;

	do {
		cout << "enter number of suites occupied in a floor" << floor << endl;
		cin >> suite;

		if (suite > 0 && suite <= 20)
		{
			totalsuites += suite;
			floor++;
		}
		else
		{
			cout << " enter number of suites between 0 and 20 per floor " << endl;
		}
		if (floor = 13)
			floor++;

		while (floor <= 16);

		cout << "Total number of suites in the hotel are 120" << endl;

		double percent = 100 * totalsuites / 120;
		cout << "percentage of suites occupied in the hotel = " << percent << endl;

		system("pause");
		return 0;
	}

