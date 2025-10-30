#include <iostream>
using namespace std;

// First base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// Second base class
class FourWheeler {
public:
    FourWheeler() {
        cout << "This is a Four Wheeler\n";
    }
};

// Derived class inherits from both base classes
class Car : public Vehicle, public FourWheeler {
public:
    Car() {
        cout << "This Four Wheeler Vehicle is a Car\n";
    }
};

int main() {
   cout << "Name  : Sakshi Dattatray Patil\n";
    cout << "Roll No: 97\n";
    cout << "Class : S.Y CSE (B)\n";
    Car obj;   // Creating object of derived class
    return 0;
}
