#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car\n";
    }
};

class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "The Vehicle is a Bus with Fare\n";
    }
};

int main() {
cout << "Name  : Sakshi Dattatray Patil\n";
cout << "Roll No: 97\n";
cout << "Class : S.Y CSE (B)\n";
    Bus obj2;
    return 0;
}
