// 11430086王泳翔
#include <iostream>
using namespace std;
int Sum(int n);
int Product(int n);
double Fun(int x, int n);
int Factorial(int n);
int Combination(int n, int k);

int main() {
    int n;
    int x;
    int k;

    cout << "Input n: ";
    cin >> n;

    cout << "Input x: ";
    cin >> x;

    cout << "Input k: ";
    cin >> k;

    cout << "Sum(" << n << ") = " << Sum(n) << endl;
    cout << "Product(" << n << ") = " << Product(n) << endl;
    cout << "Fun(" << x << ", " << n << ") = " << Fun(x, n) << endl;
    cout << "C(" << n << ", " << k << ") = " << Combination(n, k) << endl;

    return 0;
}

int Sum(int n) {
    int total = 0;

    for (int i = 1; i <= n; i++) {
        total = total + (i * i);
    }

    return total;
}
int Product(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * (2 * i - 1);
    }

    return result;
}
double Fun(int x, int n) {
    double total = 0;
    int power;

    for (int i = 1; i <= n; i++) {
        power = 1;

        for (int j = 1; j <= i; j++) {
            power = power * x;
        }

        total = total + (double)power / i;
    }

    return total;
}
int Factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}
int Combination(int n, int k) {
    int result;

    // if (k < 0 || k > n) {
    //     return 0;
    // }

    result = Factorial(n) / (Factorial(k) * Factorial(n - k));

    return result;
}