#pragma once
// create unique name (VYAS is only an example)
#ifndef VYAS_SHAPE_H
#define VYAS_SHAPE_H

class Shape {
	
public:
	Shape();
	~Shape();

	virtual double calcArea() { return 0; };
	virtual double calcPerimeter() { return 0; };
};

#endif