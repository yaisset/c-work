#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

   
  int main()
 {
 double charge;
 double tax;
 double tip;
 double total;	
 	
 	
 	cout << " enter the cost of your meal" << endl;
 	cin >> charge;
 	
 	tax = charge * .0675;
 	tip = (tax + charge) * .15;
 	total = charge + tax + tip;
 	
 	cout << "meal cost = " << charge <<endl;
 	cout << "tax = " << tax <<endl;
 	cout << "tip = " << tip <<endl;
 	cout << " total meal cost = " << total <<endl;
 	
 	
 	
 	system("pause");
 	return 0;
 }
 
 
 
