//yussuf Aisset
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double floor = 10;
	double occupancy = 120;
	double rooms;
	double percentage = 0;
	double freeRooms = 0;


	for (floor = 10; floor <= 16; floor++)
	{
		cout << "  enter the number of rooms taken on floor " << floor << endl;
		cin >> rooms;

		if (rooms < 0 || rooms > 20)
			cout << "reenter the rooms taken (1 -20)" << endl;
		else
			cout << " the  number of rooms are " << rooms << endl;


	}
	system("pause");
	return 0;
}
