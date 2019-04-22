#include"triangle.h"
float triangle::getarea()
{
	area = 0.5*(base*hight);
	return area;
}
triangle::triangle(float b, float h, string c)
	:shape(c)
{
	base = b;
	hight = h;
}
triangle::~triangle() {
	
	cout << "~ triangle () called." << endl;
}