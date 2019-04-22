#pragma once
#include<iostream>
using namespace std;
#include"shape.h"
class triangle :public shape
{
	float base;
	float hight;
public:
	float area;
	float getarea();
	
	triangle(float b, float h, string c);
		
	friend ostream& operator<<( ostream & out, const triangle & t)
	{
		out << t.base<<endl;
		out << t.hight<<endl;
		out << t.colour<<endl;
		out << t.area<<endl;
		return out;
	
	}
	~triangle();
};
