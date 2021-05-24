//
//  Point2D.cpp
//  hello
//
//  Hudson Schumaker
//

#include "Point2D.h"

Point2D::Point2D() {
	this->x = 0;
	this->y = 0;
}

Point2D::Point2D(double x, double y) {
	this->x = x;
	this->y = y;
}

void Point2D::move(double x, double y) {
	this->x = x;
	this->y = y;
}

void Point2D::translate(double d) {
	this->x += d;
	this->y += d;
}

void Point2D::translate(double dx, double dy) {
	this->x += dx;
	this->y += dy;
}
