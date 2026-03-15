class Point {
private:
    double x_;
    double y_;
    
public:
Point operator-(const Point& other){
    return Point(x_ - other.x_, y_ - other.y_);
} 
