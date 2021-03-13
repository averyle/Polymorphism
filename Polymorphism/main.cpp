#include <iostream>
#include <string>

class Rectangle {
public:
    double _width;
    double _height;
    Rectangle(double width, double height) {
        _width = width;
        _height = height;
    }
    double area() const;
};

double Rectangle::area() const {
    return _width * _height;
}

class Square {
public:
    double _side;
    Square(double side) {
        _side = side;
    }
    double area() const;
};

double Square::area() const {
    return _side * _side;
}

class Circle {
public:
    double _radius;
    Circle(double radius) {
        _radius = radius;
    }
    double area() const;
};

double Circle::area() const {
    return _radius * _radius * 3.14;
}

template<typename T>

void printArea(const T& shape) { 
    std::cout << shape.area() << "\n"; 
}

int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    printArea(r1);
    printArea(s1);
    printArea(c1);
}