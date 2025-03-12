#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void setDimensions() = 0; // Pure virtual function
        virtual double calculateArea() const = 0; // Pure virtual function
};

class Circle : public Shape {
    private:
        double radius;

    public:
        void setDimensions() override {
            cout << "Enter radius of the circle: ";
            cin >> radius;
        }

        double calculateArea() const override {
            return 3.14159 * radius * radius;
        }
};

class Rectangle : public Shape {
    private:
        double length;
        double width;

    public:
        void setDimensions() override {
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter width of the rectangle: ";
            cin >> width;
        }

        double calculateArea() const override {
            return length * width;
        }
};

class Triangle : public Shape {
    private:
        double base;
        double height;

    public:
        void setDimensions() override {
            cout << "Enter base of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;
        }

        double calculateArea() const override {
            return 0.5 * base * height;
        }
};

class Result : public Circle, public Rectangle, public Triangle {
    public:
        void findShape() {
            int shapeType;
            cout << "Select a shape to calculate area:" << endl;
            cout << "1. Circle" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Triangle" << endl;
            cout << "Enter your choice: ";
            cin >> shapeType;

            switch (shapeType) {
                case 1:
                    Circle::setDimensions();
                    cout << "The area of the circle is: " << Circle::calculateArea() << endl;
                    break;
                case 2:
                    Rectangle::setDimensions();
                    cout << "The area of the rectangle is: " << Rectangle::calculateArea() << endl;
                    break;
                case 3:
                    Triangle::setDimensions();
                    cout << "The area of the triangle is: " << Triangle::calculateArea() << endl;
                    break;
                default:
                    cout << "Invalid shape type selected." << endl;
            }
        }
};

int main() {
    Result result;
    result.findShape();
    return 0;
}