#include <iostream>
#include <cstring>
#include "shape.h"

using namespace std;

// Constructor
Shape::Shape(double x, double y, const char* name) : origin(x, y) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

// Destructor
Shape::~Shape() {
    delete[] shapeName;
}

// Getters
const Point& Shape::getOrigin() const {
    return origin;
}

const char* Shape::getName() const {
    return shapeName;
}

// Move the shape by dx and dy
void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}

// Distance functions
double Shape::distance(const Shape& other) const {
    return origin.distance(other.getOrigin());
}

double Shape::distance(const Shape& shape1, const Shape& shape2) {
    return Point::distance(shape1.getOrigin(), shape2.getOrigin());
}

// Display function
void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getX() << endl;
    cout << "Y-coordinate: " << origin.getY() << endl;
}
