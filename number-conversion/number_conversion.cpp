#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

long hex_to_int(const string &hexString) {
    char *offset;
    
    if (hexString.length() > 2) {
        if (hexString[0] == '0' && hexString[1] == 'x') {
            return strtol(hexString.c_str(), &offset, 0);
        }
    }
    return strtol(hexString.c_str(), &offset, 16);
}

int main() {
    string inputOne = "0x12AB";
    cout << hex_to_int(inputOne) << endl;

    // Convert an invalid string
    string inputTwo = "QAFG"; // 0
    cout << hex_to_int(inputTwo) << endl;
    return 0;
}