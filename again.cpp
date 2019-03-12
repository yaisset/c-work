

// Yussuf Aisset
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void swapNums(int& firstNumber, int& secondNumber);
int main()
{
	int firstNumber;
	int secondNumber;
	

	// Prompt user to enter the first number.

	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Promt user to enter the second number.

	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	swapNums(firstNumber,secondNumber);

	cout << "After swapping, the values of the two numbers are "
		<< firstNumber << " and " << secondNumber << endl;

	system("pause");
	return 0;
}
void swapNums(int& firstNumber,int& secondNumber)
{
	int thirdNumber = firstNumber;

  firstNumber = secondNumber;
secondNumber = thirdNumber; 



}
