#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int length = 190;
    const int rail8 = 8, rail10 = 10;
    int total = 0;
    int a = 0;

    cout << "LAB 5 / Task 3: Railway 190 m\n";
    cout << "Rail lengths: 8 m and 10 m\n\n";
    cout << setw(5) << "No." << setw(13) << "8-m rails"
         << setw(14) << "10-m rails" << setw(12) << "Length" << '\n';
    do {
        for (int b = 0; b <= length / rail10; ++b) {
            if (rail8 * a + rail10 * b == length) {
                ++total;
                cout << setw(5) << total << setw(13) << a
                     << setw(14) << b << setw(12) << rail8 * a + rail10 * b << '\n';
            }
        }
        ++a;
    } while (a <= length / rail8);

    cout << "\nTotal combinations: " << total << '\n';
    return 0;
}