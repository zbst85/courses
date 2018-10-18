#include "stdafx.h"
#include "Point.h"


Point::Point() : x(0), y(0) , name() {};
Point::Point(double xx, double yy, char nn) : x(xx), y(yy), name(nn) {};
Point::Point(const Point& p) : x(p.x), y(p.y), name(p.name) {};

Point::~Point()
{
}

ostream & operator<<(ostream &obj, Point &p)
{
	obj << "Point "<< p.name << "["<< p.x <<","<< p.y << "]\n";
	return obj;
}

istream& operator>>(istream &obj, Point &p)
{
	obj >> p.name >> p.x >> p.y;
	return obj;
}
