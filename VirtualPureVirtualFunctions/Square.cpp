#include "Square.h"

Square::Square(double len) {
	length = len;
};

Square::~Square() {
};

double Square::calcArea() {
	return length*length;
};

double Square::calcPerimeter() {
	return length * 4;
};