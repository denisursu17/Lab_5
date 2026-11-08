#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x;
    int n;
    cout << "LAB 5 / Task 2: Sum of sine terms\n";
    cout << "Enter x (radians): ";
    cin >> x;
    cout << "Enter number of terms n (n >= 1): ";
    cin >> n;
    if (!cin || !isfinite(x) || n < 1) {
        cout << "Error: invalid input.\n";
        return 1;
    }

    double y = 0.0;
    int k = 1;
    while (k <= n) {
        y += sin(k * x);
        ++k;
    }
    cout << fixed << setprecision(4);
    cout << "\nx = " << x << "  n = " << n << '\n';
    cout << "y = sin(x) + ... + sin(n*x) = " << y << '\n';
    return 0;
}
