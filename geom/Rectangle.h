//  Dimension.h
//  A Rectangle specifies an area in a coordinate space that is enclosed by the Rectangle object's 
//  upper-left point (x, y) in the coordinate space, its width, and its height.
//  SchumakerTeam Lab.
//  Hudson Schumaker
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <iostream>
#include "Point.h"
#include "Dimension.h"

using namespace std;

class Rectangle {
private:
	int x;
	int y;
	int w;
	int h;

public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int x, int y, int w, int h);
	Rectangle(Point p);
	Rectangle(Dimension d);
	Rectangle(Point p, Dimension d);

	Rectangle getBounds();
	Point getLocation();
	Dimension getSize();
	bool contains(Point p);
	bool contains(Rectangle r);
	bool contains(int x, int y);
	bool contains(int X, int Y, int W, int H);
	bool inside(int X, int Y);
	bool intersects(Rectangle r);

	void setX(int x) { this->x = x; };
	int getX() const { return x; };

	void setY(int y) { this->y = y; };
	int getY() const { return y; };

	void setWidth(int w) { this->w = w; };
	int getWidth() const { return w; };

	void setHeight(int h) { this->h = h; };
	int getHeight() const { return h; };

	string toString() { return "Rectangle[" + to_string(w) + ", " + to_string(h) + "]"; };
};
#endif /* RECTANGLE_H */
