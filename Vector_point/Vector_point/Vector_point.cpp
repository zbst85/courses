

#include "stdafx.h"


int main()
{
	Point A,B(3,5,'b');
	//cout << "Input point coord A(name,x,y) ->";
	//cin >> A;
	cout << A;
	cout << B;

	Vector vec1(A,B);
	//cout << "Input point Vector coord p.a(name,x,y), p.b(name,x,y) ->";
	//cin >> vec1;
	cout << vec1 << '\n';
	vec1.MultiplyVect(vec1, 4);
	cout << vec1 << '\n';

    return 0;
}

