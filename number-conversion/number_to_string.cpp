#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {
    stringstream ss;

    ss << "There are " << 9 << " apples in my cart.";
    cout << ss.str() << endl;

    ss.str(""); // Empty the string

    ss << showbase << hex << 16; // Show the base in hexadecimal
    cout << "ss = " << ss.str() << endl;

    ss.str("");
    ss << 3.14; // Store a decimal
    cout << "ss = " << ss.str() << endl;

    return 0;
}