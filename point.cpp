#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

int Point::counter = 1001;  // Initialize the static counter

// Constructor
Point::Point(double x_val, double y_val) : x(x_val), y(y_val), id(counter++) {}

// Getters
double Point::getX() const { return x; }
double Point::getY() const { return y; }
int Point::getID() const { return id; }

// Setters
void Point::setX(double x_val) { x = x_val; }
void Point::setY(double y_val) { y = y_val; }

// Get number of Point objects created
int Point::getCounter() { return counter; }

// Non-static distance function
double Point::distance(const Point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

// Static distance function
double Point::distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// Display function
void Point::display() const {
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}
