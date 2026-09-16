#include <iostream>
using namespace std;

int number1 = 100;
string name = "John Doe";

int main() {
    short int number2 = 200;
    cout << "Number: " << number1 << endl;
    cout << "How many bits does number1 occupy?" << sizeof(number1) << " bytes" << endl;
    cout << "Number: " << number2 << endl;
    cout << "How many bits does number2 occupy?" << sizeof(number2) << " bytes" << endl;
    cout << "Name: " << name << endl;

    int i1 = 10;
    float c1 = i1/3;
    cout << "Value of c1: " << c1 << endl;

    float i2 = float(i1);
    float c2 = i2/3;
    cout << "Value of c2: " << c2 << endl;
    return 0;
}