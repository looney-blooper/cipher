//1
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    string engine;
    int numberOfSeats;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car car;
    car.brand = "Toyota";
    car.model = "Corolla";
    car.engine = "V8";
    car.numberOfSeats = 5;
    
    car.displayInfo();
    return 0;
}
//q2
#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;

    cout << "Area of rect1: " << rect1.getArea() << endl;
    cout << "Area of rect2 (copied): " << rect2.getArea() << endl;
    
    return 0;
}
