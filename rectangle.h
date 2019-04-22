#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class rectangle :public shape
{
	float lenght;
	float width;
public:
	float area;
	float getarea();
	
	float getl();
	
	float getw();
	rectangle(float l, float w, string c);
	
	friend ostream & operator<<(ostream & out, const rectangle & r)
	{
		out << r.width<<endl;
		out << r.lenght<<endl;
		out << r.colour<<endl;
		out << r.area<<endl;
		return out;
	}
	~rectangle();

};
