#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};
class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is Car\n"; }
};
class Bus : public Vehicle {
public:
    Bus() { cout << "This Vehicle is Bus\n"; }
};

// main function
int main() {
    cout << "Name  : Sakshi Dattatray Patil\n";
    cout << "Roll No: 97\n";
    cout << "Class : S.Y CSE (B)\n";
    Car obj1;
    Bus obj2;
    return 0;
}
