#pragma once
#include "shape.h"
#define p 3.14
class Circle :public Shape {
private:
	double R;
public:
	Circle() = default;
	Circle (double x, double y, double R) : Shape(x,y), R(R){}
	void move (double x, double y) {} // Должна быть ошибка из-за final в shape move
	double area() {
		return (p*R*R);
	}
};