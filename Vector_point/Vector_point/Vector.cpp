#include "stdafx.h"
#include "Vector.h"


Vector::Vector(): A(0,0,'a'), B(1, 1, 'b') {}

Vector::Vector(Point aa, Point bb) : A(aa), B(bb) {}

Vector::Vector(const Vector &v): A(v.A), B (v.B) {}


Vector::~Vector()
{
}

Vector Vector::MultiplyVect(Vector& v1, int x)
{
	v1.A = v1.A*x;
	v1.B = v1.B*x;
	return v1;
}

Vector operator + (Vector& v1, Vector& v2)
{
	Vector v3;
	v3 = v1 + v2;
	return v3;
}

ostream & operator<<(ostream &obj, Vector &v)
{
	obj << "Vector coordinates begin " << v.A << "\t coordinates end " << v.B << "\n";
	return obj;
}

istream & operator>>(istream &obj, Vector &v)
{
	obj >> v.A >> v.B;
	return obj;
}
