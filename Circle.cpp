#include "Circle.h"

extern const double PI = 3.14159;
Circle::Circle(double r, int x, int y) :Point(x, y) {
	setRadius(r);
}

void Circle::setRadius(double r) {
	radius = (r > 0) ? r : 0;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::calculateArea() const {
	return PI * radius * radius;
}

void Circle::print() const {
	Point::print();
	cout << "Radius: " << radius << endl;
}

ostream& operator<<(ostream& out, const Circle& c) {
	out << "\nCenter at " << static_cast<Point>(c) << endl        //upcasting since point is larger class and circle is child class
		<< "Radius at " << c.radius << " is " << c.calculateArea();
	return out;
}