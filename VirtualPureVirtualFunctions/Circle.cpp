#include "Circle.h"
#define PI 3.14

Circle::Circle(double rad) {
	radius = rad;
};

Circle::~Circle() {
};

double Circle::calcArea() {
	return radius * radius * PI;
};

double Circle::calcPerimeter() {
	return  2 * PI * radius;
};