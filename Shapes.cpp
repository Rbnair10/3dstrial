// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
#include "Shape.h"
#include <iostream>
using namespace std;

int main()
{
	/*Point *pointPtr = 0, p(30, 50);
	Circle* circlePtr = 0, c(2.7, 120, 89);
	cout << "Point p: " << p << "\nCircle c: " << c << "\n";

	pointPtr = &c;
	cout << "\nCircle c(via *pointPtr): "<< *pointPtr << "\n";
	//cast base class pointer to derived class pointer
	circlePtr = static_cast<Circle*>(pointPtr);
	cout << "\nCircle C(via *circlePtr):\n" << *circlePtr
		<< "\nArea of c(via circlePtr): "
		<< circlePtr->calculateArea() << "\n";

	pointPtr = &p;
	//cast base class pointer to derived class pointer
	circlePtr = static_cast<Circle*>(pointPtr);
	cout << "\nPoint p (via *circlePtr):\n" << *circlePtr
		<<"\nArea of object circlePtr points to: "
		<< circlePtr->calculateArea() << endl;

	//circlePtr = &p;
	Cylinder c1(2,3,4,5);
	cout << "Area of cylinder is " << c1.calculateArea()<<endl;
	cout << "Volume of cylinder is " << c1.calculateVolume()<<endl;
	//cout << c1;*/

	cout << "________For point___________\n";
	Point p1(2, 4);
	p1.drawShape();
	p1.print();
	cout << "Area is " << p1.calculateArea() << " and volume is " << p1.calculateVolume() << endl;

	cout << "________For circle__________\n";
	Circle c1(2, 4, 5);
	c1.drawShape();
	c1.print();
	cout << "Area is " << c1.calculateArea() << " and volume is " <<  c1.calculateVolume() << endl;

	cout << "________For cylinder________\n";
	Cylinder cy1(2, 4, 5, 6);
	cy1.drawShape();
	cy1.print();
	cout << "Area is " << cy1.calculateArea() << " and volume is " << cy1.calculateVolume() << endl;

	cout << "--------------------------------\n";
	Shape* shape[3] = { &p1, &c1, &cy1 };
	for (int i = 0; i < 3; ++i)
	{
		virtualViaPointer(shape[i]);
	}
	
	for (int i = 0; i < 3; ++i)
	{
		virtualViaReference(*shape[i]);
	}
	return 0;
}


