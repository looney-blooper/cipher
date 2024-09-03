
#include <iostream>
using namespace std;
//question 1
int main() {
    int N, sum = 0;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
    return 0;
}
//question 2
int main() {
    int N, factorial = 1;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    cout << "The factorial of " << N << " is: " << factorial << endl;
    return 0;
}
//question 3
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Multiplication table of " << N << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
    return 0;
}
