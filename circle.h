#pragma once
#include<iostream>
#include<string>
#include"shape.h"
using namespace std;

class circle :public shape
{
	float radius;
public:
	float area;
	float getarea();
	
	circle(float r, string c);
		
	float getr();
	
	friend ostream& operator<<( ostream & out, const circle & c)
	{
		out << c.radius<<endl;
		out << c.colour<<endl;
		out << c.area<<endl;
		return out;
	
	}
	~circle();

};
