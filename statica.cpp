#include <iostream>
using namespace std;

class student {
    int x;
    static int y;
public:
    student(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }

    static void f() {
        cout << "Static y: " << y << endl;
    }
};

// Static variable initialization
int student::y = 0;

int main() {
    student s1(50, 60);
    s1.display();
    s1.f();

    student s2(70, 80);
    s2.display();
    s2.f();
    s1.display();

    return 0;
}
