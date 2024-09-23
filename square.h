#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
private:
    double side_a;  // Length of one side of the square

public:
    // Constructor
    Square(double x, double y, double side_a, const char* name);

    // Copy Constructor
    Square(const Square& other);

    // Assignment Operator
    Square& operator=(const Square& rhs);

    // Setters and Getters
    void set_side_a(double a);
    double get_side_a() const;

    // Area and Perimeter functions
    double area() const;
    double perimeter() const;

    // Display function (override from Shape)
    void display() const override;
};

#endif // SQUARE_H

