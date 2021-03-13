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

/*
1. Which one of these do you think is easier to implementand use, dynamic or static polymorphism ?
I like static polymorphism better because it is faster, more precise, and easy to declare. 

2. Modern C++ development highly encourages static polymorphism over dynamic polymorphism, why do you think that is ?
I think static polymorphism is preferred because you don't have to go through the process of writing codes in the
superclass just to override it in subclasses. With static polymorphism, you can declare a generic funtion type,
and the compiler will automatically assign whatever type the value is being passed as the type being used. In a way,
T is just an object type, like one you would have if you create a class object.
*/