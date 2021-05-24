//
//  Point2D.h
//  SchumakerTeam Lab.
//
//  Hudson Schumaker
//

#ifndef POINT2D_H
#define POINT2D_H

#include <string>
#include <iostream>

using namespace std;

class Point2D {
private:
	double x;
	double y;

public:
	Point2D();
	Point2D(double x, double y);

	void move(double x, double y);
	void translate(double d);
	void translate(double dx, double dy);

	void setX(double x) { this->x = x; };
	double getX() const { return x; };

	void setY(double y) { this->y = y; };
	double getY() const { return y; };

	string toString() { return "Point[" + to_string(x) + ", " + to_string(y) + "]"; };
};

#endif /* POINT2D_H */
