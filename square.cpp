#include <iostream>
#include "square.h"

using namespace std;

// Constructor
Square::Square(double x, double y, double side_a, const char* name)
    : Shape(x, y, name), side_a(side_a) {}

// Copy Constructor
Square::Square(const Square& other) : Shape(other) {
    side_a = other.side_a;
}

// Assignment Operator
Square& Square::operator=(const Square& rhs) {
    if (this == &rhs)
        return *this;
    
    Shape::operator=(rhs);  // Call base class assignment operator
    side_a = rhs.side_a;
    return *this;
}

// Setters and Getters
void Square::set_side_a(double a) {
    side_a = a;
}

double Square::get_side_a() const {
    return side_a;
}

// Area and Perimeter functions
double Square::area() const {
    return side_a * side_a;
}

double Square::perimeter() const {
    return 4 * side_a;
}

// Display function
void Square::display() const {
    Shape::display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}

