#include "stdafx.h"
#include "Point.h"


Point::Point() : x(0), y(0) , name() {};
Point::Point(double xx, double yy, char nn) : x(xx), y(yy), name(nn) {};
Point::Point(const Point& p) : x(p.x), y(p.y), name(p.name) {}
double Point::getCoorY()
{
	return y;
}
double Point::getCoorX()
{
	return x;
}
;

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

Point operator*(Point &p, int a)
{
	p.x = p.x*a;
	p.y = p.y*a;
	
	return p;
}

void VectLen(Point &A, Point&B)
{
	double len;
	len = sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
	cout<<"Vector lenght is  "<< len<<'\n';
}