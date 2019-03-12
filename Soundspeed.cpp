// Yussuf Aisset
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string air = "air";
	string water = "water";
	string steel = "steel";
	string elementResult;
	double distanceTraveled;		cout << setprecision(4) << fixed << showpoint;


	cout << " chose an element to measure!" << endl;
	cout << " the three elements we have to chose are" << endl;

	cout << "  air    water   steel ";
	cin >> elementResult;

	if (elementResult != air && elementResult != water && elementResult != steel)
		cout << "invalid option" << endl;
	else
	{
		cout << "enter the distance in feet the sound will travel ( answer must be postive) " << endl;
		cin >> distanceTraveled;
	}

	if (distanceTraveled < 0)
		cout << "invalid option" << endl;

	else if (air == elementResult)

		cout << "the number of seconds it will take to travel is " << distanceTraveled / 1100 << endl;

	else if (water == elementResult)

		cout << "the number of seconds it will take to travel is " << distanceTraveled / 4900 << endl;

	else if (steel == elementResult)

		cout << "the number of seconds it will take to travel is " << distanceTraveled / 16400 << endl;

	system("pause");
	return 0;
}