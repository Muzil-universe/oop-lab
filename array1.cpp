#include <iostream>
using namespace std;

class student {
private:
    string name[3];

public:
    
    student(string arr[]) {
        for (int i = 0; i < 3; i++) {
            name[i] = arr[i];
        }
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            cout << name[i] << endl;
        }
    }
};

int main() {
    string s[3] = { "ali00", "muzil", "baber" };
    student s1(s);
    s1.display();

    return 0;
}
