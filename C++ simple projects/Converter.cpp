#include <iostream>
using namespace std;

//take note that kung nasaan yung main() class yun yung mag rurun -sneki// 
int convert(){
    int sagot;

    do {
        int ans;
        /*Temperature*/
        double celsius;
        double fahrenheiht;
        /*Length*/
        double meters;
        double feet;
        /*Weight*/
        double kilo;
        double pounds;

        cout << "Enter 1 for Temperature converter(celsius to fahrenheiht)" << endl;
        cout << "Enter 2 for Length converter(meters to feet)" << endl;
        cout << "Enter 3 for Weight converter(kilograms to pounds)" << endl;
        cout << "Input here: ";
        cin >> ans;

        if (ans == 1) {
            cout << "Enter Celsius: ";
            cin >> celsius;
            fahrenheiht = celsius * 9.0 / 5.0 + 32.0;
            cout << "Fahrenheiht: " << fahrenheiht << endl;
        }
        else if (ans == 2) {
            cout << "Enter Meter: ";
            cin >> meters;
            feet = meters * 3.2808399;
            cout << "Feet: " << feet << endl;
        }
        else if (ans == 3) {
            cout << "Enter Kilo: ";
            cin >> kilo;
            pounds = kilo * 2.20462262;
            cout << "Pounds: " << pounds << endl;
        }
        else {
            cout << "THATS NOT IN THE CHOICES" << endl;
        }
        cout << endl;
        cout << "Enter 1 if you want to try again" << endl;
        cout << "Enter 2 to exit" << endl;
        cout << "Input here: ";
        cin >> sagot;

    } while (sagot != 2);

    cout << "----------------------END---------------------------" << endl;

    return 0;
}