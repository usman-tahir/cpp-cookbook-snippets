#include <iostream>
#include <string>
#include "person.h"
using namespace std;

Person::Person() {
    name = "";
    age = 0;
}

Person::Person(string n, int a) {
    name = n;
    age = a;
}

void Person::introduce() {
    Person p = *this;
    cout << "Hello, my name is " << p.name << " and I am " << p.age << " years old." << endl;
}