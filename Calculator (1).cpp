/*
 * Calculator.cpp
 *
 *  Date: [9/9/2022]
 *  Author: [Carlos Ruiz]
 */

#include <iostream>

using namespace std;
// changing void to int
int main()
{
	double op1, op2; // declaring both variables as doubles
	char operation; // so that the variable will store the operator 
	char answer = 'Y'; // change the double quotes to singles
	
	while (answer == 'y' || answer == 'Y')
	{
		cout << "Enter expression " << endl; // adding space at the end of the expression
		cin >> op1 >> operation >> op2; // switched op1 and op2 places

		if (operation == '+') // changed "" to '' and took away ;
		cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // changed direction after op2

		if (operation == '-') // took away ;
		cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // changed direction to << after cout

		if (operation == '*')
		cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // changed / to * & added ;

		if (operation == '/')
		cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // changed * to /

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}

	cout << endl << "Program Finished"; // added ending
	return 0; // added return
}
