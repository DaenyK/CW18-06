#pragma once
#include "Headers.h"

class Shape {
protected:
	double x, y;
public:
	Shape() = default;
	virtual double area() = 0;
	virtual void move(double x, double y) final;
};

void Shape::move(double x, double y) {
	this->x += x;
	this->y += y;
}
