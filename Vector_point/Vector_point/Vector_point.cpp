

#include "stdafx.h"


int main()
{
	Point A,B(3,5,'b');
	cout << "Input point coord A(name,x,y) ->";
	cin >> A;
	cout << A;
	cout << B;

	Vector vec1(A, B), vec2;
	cout << "Input point Vector coord p.a(name,x,y), p.b(name,x,y) ->";
	cin >> vec2;
	cout << vec1 <<vec2 << '\n';
	//vec1.MultiplyVect(vec1, 4);
	//cout << vec1 << '\n';
	VectLen(A,B);
	
	vec1.VectLen1(vec1);
	vec2.VectLen1(vec2);
    
	return 0;
}
