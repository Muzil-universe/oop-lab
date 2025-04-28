#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << n << endl; // The square root of 0 is 0, and 1 is 1
        return 0;
    }

    double guess = n / 2.0;  // Initial guess
    double epsilon = 0.0001; // Precision (accuracy of the result)

    // Iteratively improve the guess
    while (true) {
        double next_guess = (guess + n / guess) / 2.0;  // Babylonian method
        if (abs(guess - next_guess) < epsilon) {        // If the guess is close enough to the real square root
            break;
        }
        guess = next_guess;  // Update guess
    }

    cout << "Approximate square root of " << n << " is: " << guess << endl;
    return 0;
}
