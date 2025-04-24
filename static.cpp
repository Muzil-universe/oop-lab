#include <iostream>
using namespace std;

void f() {
  
    // Static variable
    int count = 0;

    // The value will be updated and carried over
  	// to the next function call
    count++;
  	cout << count << " ";
}

int main() {
  
  	// Calling function f() 5 times
    for (int i = 0; i < 5; i++)
        f();
  
    return 0;
}
