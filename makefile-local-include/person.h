#include <string>
using namespace std;

struct Person {
    string name;
    int age;

    Person();
    Person(string n, int age);

    void introduce();
};