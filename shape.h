#pragma once
#include<iostream>
#include<string>
using namespace std;
class shape
{
protected:
	string type;
	float area;
	
public:
	string colour;
	virtual float getarea();
	
	shape(string );
	
	string getc();
	
	~shape(); 
	
	friend ostream & shape::operator<<(ostream & out, const shape &s)
	{
		out << s.colour << endl;
		out << s.area << endl;
		return out;
	}
};
