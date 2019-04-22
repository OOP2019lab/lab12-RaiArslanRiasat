#include"circle.h"
float circle::getarea()
{
	area = 3.14*(radius *radius);
	return area;
}
circle::circle(float r, string c)
	:shape(c)
{
	radius = r;
}
float circle::getr()
{
	return radius;
}
circle::~circle() { 
	cout << "~ circle () called." << endl;
}
