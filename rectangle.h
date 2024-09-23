#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
private:
    double side_a;  // Length of one side of the rectangle
    double side_b;  // Length of the other side of the rectangle

public:
    // Constructor
    Rectangle(double x, double y, double a, double b, const char* name);

    // Copy constructor
    Rectangle(const Rectangle& other);

    // Assignment operator
    Rectangle& operator=(const Rectangle& other);

    // Setters and Getters
    void set_side_a(double a);
    void set_side_b(double b);
    double get_side_a() const;
    double get_side_b() const;

    // Area and Perimeter functions
    double area() const;
    double perimeter() const;

    // Display function
    void display() const override;
};

#endif // RECTANGLE_H
