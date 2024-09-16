//1
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("details.txt");  // Open a file to write

    if (file.is_open()) {
        // Writing details to the file
        file << "Name: Vasanth" << endl;
        file << "Age: 18" << endl;
        file << "Course: B.Tech in CSE (AI & ML)" << endl;
        file.close();  // Closing the file after writing
    } else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Reopen the file to read and display the details
    ifstream fileRead("details.txt");

    if (fileRead.is_open()) {
        string line;
        cout << "Details from the file:" << endl;
        while (getline(fileRead, line)) {
            cout << line << endl;
        }
        fileRead.close();  // Closing the file after reading
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
//2
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");  // Open a file to read

    if (file.is_open()) {
        string line;
        cout << "Contents of the file:" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();  // Closing the file after reading
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
