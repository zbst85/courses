#pragma once

class Point
{
private:
	double x, y;
	char name;
public:
	Point();
	Point(double, double, char);
	Point(const Point &p);
	double getCoorX();
	double getCoorY();
	
	virtual ~Point();
	friend ostream& operator << (ostream&, Point&);
	friend istream& operator >> (istream&, Point&);
	friend Point operator * (Point&, int);
	friend void VectLen(Point &A, Point&B);
	//friend void Vector::VectLen1(Vector& v);
};

