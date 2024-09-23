#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
private:
    Point origin;  // The origin point of the shape
    char* shapeName;  // Name of the shape

public:
    // Constructor
    Shape(double x, double y, const char* name);

    // Destructor
    virtual ~Shape();

    // Getters
    const Point& getOrigin() const;
    const char* getName() const;

    // Move the shape
    void move(double dx, double dy);

    // Distance functions
    double distance(const Shape& other) const;
    static double distance(const Shape& shape1, const Shape& shape2);

    // Display function
    virtual void display() const;
};

#endif // SHAPE_H


