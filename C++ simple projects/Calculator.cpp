#include <iostream>
using namespace std;

//take note that kung nasaan yung main() class yun yung mag rurun -sneki// 
int main() {
	int sagot;

	do {
		int ans;

		double num1;
		double num2;
		double total;

		cout << "Enter 1 for Addition" << endl;
		cout << "Enter 2 for Substraction" << endl;
		cout << "Enter 3 for Multiplication" << endl;
		cout << "Enter 4 for Division" << endl;
		cout << "Input here: ";
		cin >> ans;

		if (ans == 1) {
		   cout << "Enter first digit: " << endl;
		   cin >> num1;
		   cout << "Enter second digit: " << endl;
		   cin >> num2;
		   total = num1 + num2;
		   cout << num1 << " + " << num2 << " = " << total << endl;
		}
		else if(ans == 2){
			cout << "Enter first digit: " << endl;
			cin >> num1;
			cout << "Enter second digit: " << endl;
			cin >> num2;
			total = num1 - num2;
			cout << num1 << " - " << num2 << " = " << total << endl;
		}
		else if (ans == 3) {
			cout << "Enter first digit: " << endl;
			cin >> num1;
			cout << "Enter second digit: " << endl;
			cin >> num2;
			total = num1 * num2;
			cout << num1 << " * " << num2 << " = " << total << endl;
		}
		else if (ans == 4) {
			cout << "Enter first digit: " << endl;
			cin >> num1;
			cout << "Enter second digit: " << endl;
			cin >> num2;
			total = num1 / num2;
			cout << num1 << " / " << num2 << " = " << total << endl;
		}
		else {
			cout << "Invalid" << endl;
		}
		cout << endl;
		cout << "Enter 1 if you want to try again" << endl;
		cout << "Enter 2 to exit" << endl;
		cout << "Input here: ";
		cin >> sagot;

	} while (sagot != 2);
	return 0;
}