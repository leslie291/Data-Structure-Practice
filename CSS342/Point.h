#pragma once 

class Point {
private:
    double x_;
    double y_;

public:
Point(double x, double y) : x_(x), y_(y) {}

Point operator-(const Point& other) const {
    return Point(x_ - other.x_, y_ - other.y_);
} 
};
