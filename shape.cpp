#include"shape.h"
 float shape::getarea()
{
	return 0;
}
shape::shape(string c)
{
	colour = c;
}
string shape::getc()
{
	return colour;
}
shape::~shape() {
	cout << "~shape() called." << endl;
}
