#include <iostream>
#include "person.cpp"
using namespace std;

int main() {
    Person p = Person("John Doe", 18);
    p.introduce();
    return 0;
}