#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"


using namespace std;

#define ARRSIZE 5

int main(void) {

	Shape sh;
	Square sq(4.3);
	Circle c(3.6);

	cout << "The Square has an Area of : " << sq.calcArea() << " and a Perimeter of " << sq.calcPerimeter () << endl;
	cout << "The Circle has an Area of : " << c.calcArea() << " and a Perimeter of " << c.calcPerimeter() << endl;

	Shape* shapeArray[ARRSIZE];
	shapeArray[0] = new Square(5.1);
	shapeArray[1] = new Circle(2.2);
	shapeArray[2] = new Square(14);
	shapeArray[3] = new Square(21.4);
	shapeArray[4] = new Circle(113);

	for (int i = 0; i < ARRSIZE; i++) {
		cout << "The Shape has an Area of : " << shapeArray[i]->calcArea() << " and a Perimeter of " << shapeArray[i]->calcPerimeter() << endl;
	}

	system("PAUSE");
	return 0;
}