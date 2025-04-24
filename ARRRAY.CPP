#include <iostream>
using namespace std;

class student {
    int id[3];
    string name[3];
public:
    student(int s1, int s2, int s3, string n1, string n2, string n3) {
        id[0] = s1;
        id[1] = s2;
        id[2] = s3;
        name[0] = n1;
        name[1] = n2;
        name[2] = n3;
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            cout << "ID: " << id[i] << endl;
            cout << "Name: " << name[i] << endl;
        }
    }
};

int main() {
    student s(22, 23, 56, "Ali", "Ahmed", "Baber");
    s.display();
    return 0;
}
