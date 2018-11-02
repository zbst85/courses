#pragma once
class Vector
{
private: 
	Point A, B;
		

public:

	Vector();
	Vector(Point, Point);
	Vector(const Vector&);
	
	~Vector();

	Vector MultiplyVect(Vector&, int);

friend Vector operator+ (Vector&, Vector&);

	friend ostream& operator << (ostream&, Vector&);
	friend istream& operator >> (istream&, Vector&);
	

};

