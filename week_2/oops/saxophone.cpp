#include <iostream>
using namespace std;


class Playable {
public:
    virtual void play() = 0;
};


class Saxophone : public Playable {
public:
    void play() override {
        cout << "Playing Saxophone" << endl;
    }
};
