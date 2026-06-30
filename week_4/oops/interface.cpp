#include <iostream>
using namespace std;

// Interface
class Test {
public:
    virtual int square(int x) = 0;
};

// Implementing interface
class Arithmetic : public Test {
public:
    int square(int x) override {
        return x * x;
    }
};

// Using object
class ToTestInt {
public:
    void display() {
        Arithmetic obj;
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << "Square = " << obj.square(num) << endl;
    }
};

int main() {
    ToTestInt t;
    t.display();
    return 0;
}