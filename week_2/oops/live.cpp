#include <iostream>
using namespace std;

class Playable {
public:
    virtual void play() = 0;
};

class Veena : public Playable {
public:
    void play() override {
        cout << "Playing Veena" << endl;
    }
};

class Saxophone : public Playable {
public:
    void play() override {
        cout << "Playing Saxophone" << endl;
    }
};

class Test {
public:
    void run() {
        Veena v;
        v.play();

        Saxophone s;
        s.play();

        Playable* p;

        p = new Veena();
        p->play();
        delete p;

        p = new Saxophone();
        p->play();
        delete p;
    }
};