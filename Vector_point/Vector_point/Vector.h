#pragma once
class Vector
{
private: 
	Point A, B;

	char vname;

public:

	Vector();
	Vector(Point, Point, char);
	Vector(const Vector&);
	
	~Vector();

	friend ostream& operator << (ostream&, Vector&);
	friend istream& operator >> (istream&, Vector&);
	friend 

};

