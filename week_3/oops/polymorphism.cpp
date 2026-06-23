#include<iostream>

#include <cstdlib>
#include <ctime>
using namespace std;

// Abstract class
class Compartment {
public:
    virtual string notice() = 0; // Pure virtual function
    virtual ~Compartment() {}
};

// FirstClass class
class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class Compartment";
    }
};

// Ladies class
class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies Compartment";
    }
};

// General class
class General : public Compartment {
public:
    string notice() {
        return "General Compartment";
    }
};

// Luggage class
class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage Compartment";
    }
};

int main() {
    Compartment* c[10];

    srand(time(0));

    for (int i = 0; i < 10; i++) {
        int num = rand() % 4 + 1;

        switch (num) {
            case 1:
                c[i] = new FirstClass();
                break;
            case 2:
                c[i] = new Ladies();
                break;
            case 3:
                c[i] = new General();
                break;
            case 4:
                c[i] = new Luggage();
                break;
        }
    }

    cout << "Compartments Generated:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Compartment " << (i + 1)
             << ": " << c[i]->notice() << endl;
    }

    // Free memory
    for (int i = 0; i < 10; i++) {
        delete c[i];
    }

    return 0;
}