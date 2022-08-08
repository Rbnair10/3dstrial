#include "Shape.h"
#include <iostream>
using namespace std;

void virtualViaPointer(const Shape* baseptr) {
	baseptr->drawShape();
	baseptr->print();
	cout << "Area is " << baseptr->calculateArea()
		<< " Volume is " << baseptr->calculateVolume() << "\n\n";
}

void virtualViaReference(const Shape& baseClassRef) {
	baseClassRef.drawShape();            //while using reference, we use dot operator
	baseClassRef.print();
	cout << "Area is " << baseClassRef.calculateArea()
		<< " Volume is " << baseClassRef.calculateVolume() << "\n\n";
}