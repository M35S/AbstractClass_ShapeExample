#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

void pDraw(Shape & shape);

int main()
{
	Triangle objectTriangle;
	Rectangle objectRectangle;

	pDraw(objectTriangle);

	pDraw(objectRectangle);
	
	objectTriangle.draw();

	system("pause");

	return 0;
}

void pDraw(Shape & shape)
{
	shape.draw();
}