#include<iostream>
#include"shape.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<conio.h>
using namespace std;
float sumArea(shape & s1,shape& s2)
{
	float sum = 0;
	sum = s1.getarea() + s2.getarea();
	return sum;
}
void main()
{
	triangle t1(1.0, 9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6, 2, "Orange");
	cout << t1.getarea() << endl;
	cout << t1.colour << endl;
	cout << c1.getarea() << endl;
	cout << r1.getarea() << endl;
	shape *sptr = &t1;
	shape &sref = r1;
	cout << sptr->getarea() << endl;
	cout << sptr->colour << endl;
	cout << sref.colour << endl;
	cout << sref.getarea() << endl;
	shape s1("Purple");

	cout << sumArea(t1, c1)<<endl;
	cout << sumArea(s1, r1)<<endl;
	cout << sumArea(s1, t1)<<endl;

	int count = 5;
	shape **shapearray = new shape*[count];
	for (int i = 0;i < count;i++)
	{
		string c;
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		int a = 0;cin >> a;
		if (a == 1)
		{
			int b , h ;

			cout << "base : ";
			cin >> b;
			cout << "Hight : ";
			cin >> h;
			cout << "color : ";
			cin >> c;
			triangle t2(b, h, c);
			shapearray[i] = new triangle(t2);
			i++;
		}

		else if (a == 2)
		{
			int lenght , wi ;
			cout << "Lenght : ";
			cin >> lenght;
			cout << "width : ";
			cin >> wi;
			cout << "color : ";
			cin >> c;
			rectangle r2(lenght, wi, c);
			shapearray[i] = new rectangle(r2);
			i++;
		}

		else if (a == 3)
		{
			int r ;
			cout << "Radius :";
			cin >> r;
			cout << "Color : ";
			cin >> c;
			circle c2(r, c);
			shapearray[i] = new circle(c2);
		}
		else
			cout << "Invalid input. Enter again." << endl << endl;
		cout << "ARea :";
		cout << shapearray[count]->getarea() << endl;
		}
	for (int i = 0;i<count;i++)
	{
		cout << shapearray[count]->getarea() << endl;
	}
	for (int i = 0;i<count;i++)
		delete  shapearray[i];

	shape *s1 = new triangle(1.0, 9.0, "Red");// constructor of triangle invoked
	delete s1; //identify which destructor in invoked
	system("pause");
}