#include <iostream>
#include <string>

class Shape {};

class Rectangle : public Shape {
public:
    double _width;
    double _height;
    Rectangle(double width, double height) {
        _width = width;
        _height = height;
    }
};

class Square : public Shape {
public:
    double _side;
    Square(double side) {
        _side = side;
    }
};

class Circle : public Shape {
public:
    double _radius;
    Circle(double radius) {
        _radius = radius;
    }
};

int main() {
    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    // printArea(r1);
    // printArea(s1);
    // printArea(c1);
}