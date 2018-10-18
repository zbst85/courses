#include "stdafx.h"
#include "Vector.h"


Vector::Vector(): A(0,0,'a'), B(1, 1, 'b'), vname () {}

Vector::Vector(Point aa, Point bb, char vnn) : A(aa), B(bb), vname(vnn) {}

Vector::Vector(const Vector &v): A(v.A), B (v.B), vname (v.vname) {}


Vector::~Vector()
{
}

ostream & operator<<(ostream &obj, Vector &v)
{
	obj << "Vector" << v.vname << "\t coordinates begin [" << v.A << "]" << "\t coordinates end [" << v.B << "]\n";
	return obj;
}

istream & operator>>(istream &obj, Vector &v)
{
	obj >> v.A >> v.B >> v.vname;
	return obj;
}
