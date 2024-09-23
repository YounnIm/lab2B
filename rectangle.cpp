#include <iostream>
#include "rectangle.h"

using namespace std;

// Constructor for Rectangle
Rectangle::Rectangle(double x, double y, double a, double b, const char* name) 
    : Shape(x, y, name), side_a(a), side_b(b) {}

// Copy constructor for Rectangle
Rectangle::Rectangle(const Rectangle& other) 
    : Shape(other.getOrigin().getX(), other.getOrigin().getY(), other.getName()),
      side_a(other.side_a), side_b(other.side_b) {}

// Assignment operator for Rectangle
Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this != &other) {
        Shape::operator=(other); // Call base class assignment operator
        side_a = other.side_a;
        side_b = other.side_b;
    }
    return *this;
}

// Setters
void Rectangle::set_side_a(double a) {
    side_a = a;
}

void Rectangle::set_side_b(double b) {
    side_b = b;
}

// Getters
double Rectangle::get_side_a() const {
    return side_a;
}

double Rectangle::get_side_b() const {
    return side_b;
}

// Function to calculate the area of the rectangle
double Rectangle::area() const {
    return side_a * side_b;
}

// Function to calculate the perimeter of the rectangle
double Rectangle::perimeter() const {
    return 2 * (side_a + side_b);
}

// Display function for Rectangle
void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl;
    cout << "X-coordinate: " << getOrigin().getX() << endl;
    cout << "Y-coordinate: " << getOrigin().getY() << endl;
    cout << "Side a: " << side_a << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}


