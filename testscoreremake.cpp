
// Yussuf Aisset
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_Tests = 5;
	int testnumber;
	double  testscore;
	double totalScore = 0.0;
	

	testnumber = 1;
	while (testnumber <= NUM_Tests)
	{
		cout << " whats the score of your test?" << testnumber << ": ";
		cin >> testscore;
		testnumber++;
		

		if (testscore > 100 || testscore < 0) {

			cout << "this test score is invalid" << endl;
			cout << "re-enter your test score" << endl;
			cin >> testscore;
			testnumber++;
		}
		//testscore = testscore++ -1;
			totalScore += testscore;
	}


	
	cout << " your average test score is " << totalScore / 5  << endl;

	system("pause");
	return 0;
}
