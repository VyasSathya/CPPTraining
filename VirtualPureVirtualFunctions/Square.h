#pragma once
#ifndef VYAS_SQUARE_H
#define VYAS_SQUARE_H

#include "Shape.h"

class Square : public Shape {
		double length;

	public:
		Square(double len);
		~Square();

		double calcArea();
		double calcPerimeter();
};

#endif