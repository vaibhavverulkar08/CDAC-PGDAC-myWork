#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float perimeter() {
        return 2 * (length + width);
    }

    float area() {
        return length * width;
    }

    void show() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    int sameArea(Rectangle r) {
        if (area() == r.area()) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
    Rectangle rect1, rect2;

    // Set the length and width of the first rectangle to 5 and 2.5
    rect1.setLength(5);
    rect1.setWidth(2.5);

    // Set the length and width of the second rectangle to 5 and 18.9
    rect2.setLength(5);
    rect2.setWidth(18.9);

    // Display each rectangle and its area and perimeter
    cout << "Rectangle 1:" << endl;
    rect1.show();
    cout << "Area: " << rect1.area() << endl;
    cout << "Perimeter: " << rect1.perimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Area: " << rect2.area() << endl;
    cout << "Perimeter: " << rect2.perimeter() << endl;

    // Check whether the two rectangles have the same area
    cout << "\nAre the rectangles equal in area? ";
    if (rect1.sameArea(rect2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // Set the length and width of the first rectangle to 15 and 6.3
    rect1.setLength(15);
    rect1.setWidth(6.3);

    // Display each rectangle and its area and perimeter again
    cout << "\nRectangle 1 (updated):" << endl;
    rect1.show();
    cout << "Area: " << rect1.area() << endl;
    cout << "Perimeter: " << rect1.perimeter() << endl;

    cout << "\nRectangle 2:" << endl;
    rect2.show();
    cout << "Area: " << rect2.area() << endl;
    cout << "Perimeter: " << rect2.perimeter() << endl;

    // Check whether the two rectangles have the same area after the update
    cout << "\nAre the rectangles equal in area? ";
    if (rect1.sameArea(rect2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
