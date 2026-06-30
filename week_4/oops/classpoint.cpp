#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "Point = (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    Point p2(10, 20);

    p1.display();
    p2.display();

    p1.setX(5);
    p1.setY(15);
    p1.display();

    p1.setXY(30, 40);
    p1.display();

    return 0;
}