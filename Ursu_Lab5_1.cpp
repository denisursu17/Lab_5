#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "LAB 5 / Task 1: Armstrong numbers\n";
    cout << "Enter upper limit n (n >= 100): ";
    cin >> n;
    if (!cin || n < 100) {
        cout << "Error: n must be an integer >= 100.\n";
        return 1;
    }

    int count = 0;
    cout << "\nNumbers in [100, " << n << "]:\n";
    for (int number = 100; number <= n && number <= 999; ++number) {
        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int ones = number % 10;
        int sum = hundreds * hundreds * hundreds
                + tens * tens * tens + ones * ones * ones;
        if (sum == number) {
            cout << setw(3) << number << " = " << hundreds << "^3 + "
                 << tens << "^3 + " << ones << "^3\n";
            ++count;
        }
    }
    if (count == 0) cout << "No matching numbers.\n";
    cout << "Total: " << count << '\n';
    return 0;
}
