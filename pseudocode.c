#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int number = 2; number <= 100; ++number) {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << number << " ";
        }
    }

    cout << endl;
    return 0;
}
