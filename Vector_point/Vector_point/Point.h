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
	
	virtual ~Point();
	friend ostream& operator << (ostream&, Point&);
	friend istream& operator >> (istream&, Point&);
	friend Point operator * (Point&, int);
};

