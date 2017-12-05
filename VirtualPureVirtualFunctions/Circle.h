#pragma once
#ifndef VYAS_CIRCLE_H
#define VYAS_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
	double radius;

public:
	Circle(double rad);
	~Circle();

	double calcArea();
	double calcPerimeter();
};

#endif