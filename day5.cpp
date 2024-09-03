#include<bits/stdc++.h>
using namespace std;
//question 1
void checkOddOrEven(int num) {
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkOddOrEven(num);
    return 0;
}
//question 2
string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversedStr = reverseString(str);
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}
//question 3
void countVowelsAndConsonants(string str) {
    int vowels = 0, consonants = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    countVowelsAndConsonants(str);
    return 0;
}
