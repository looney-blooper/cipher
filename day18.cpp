#include <iostream>
#include <tuple>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    // Constructor to initialize member variables
    Person(string first, string last, int age) {
        this->firstName = first;
        this->lastName = last;
        this->age = age;
    }

    // Method to return the full name
    string getFullName() const {
        return firstName + " " + lastName;
    }

    // Method to return the firstName, lastName, and age as a tuple
    tuple<string, string, int> getDetails() const {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    // Creating an object of Person
    Person person("John", "Doe", 25);

    // Displaying the full name using getFullName
    cout << "Full Name: " << person.getFullName() << endl;

    // Unpacking the tuple returned by getDetails using structured bindings
    auto [firstName, lastName, age] = person.getDetails();

    // Displaying the unpacked details
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;

    return 0;
}
