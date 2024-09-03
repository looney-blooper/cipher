#include <bits/stdc++.h>
using namespace std;
//question 1
int main() {
    int size, sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
    return 0;
}
//question 2
int main() {
    int size, sumOdd = 0, sumEven = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    return 0;
}
//question 3
int main() {
    int size, countOdd = 0, countEven = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;
    return 0;
}

