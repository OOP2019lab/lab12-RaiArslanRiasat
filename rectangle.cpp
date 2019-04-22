#include"rectangle.h"
float rectangle::getarea()
{
	area = lenght*width;
	return area;
}
float rectangle::getl()
{
	return lenght;
}
float rectangle::getw()
{
	return width;
}
rectangle::rectangle(float l, float w, string c)
	:shape(c)
{
	lenght = l;
	width = w;
}
rectangle::~rectangle() 
{
	cout << "~rectangle() called." << endl;
}