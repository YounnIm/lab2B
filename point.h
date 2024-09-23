#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;  // x and y coordinates
    static int counter;  // static counter to assign IDs
    int id;  // unique ID for each point

public:
    // Constructor
    Point(double x_val, double y_val);

    // Accessors
    double getX() const;
    double getY() const;
    int getID() const;

    // Modifiers
    void setX(double x_val);
    void setY(double y_val);

    // Static function to get total number of Points created
    static int getCounter();

    // Distance between two points
    double distance(const Point& other) const;

    // Static distance function
    static double distance(const Point& p1, const Point& p2);

    // Display function
    void display() const;
};

#endif // POINT_H
