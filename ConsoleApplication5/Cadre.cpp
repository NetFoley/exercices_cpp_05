#include "Cadre.h"

cPoint::cPoint()
{
	this->x = 0;
	this->y = 0;
}

cPoint::cPoint(float x, float y)
{
	this->x = x;
	this->y = y;
}

cPoint cPoint::operator+=(const cPoint& p)
{
	this->x += p.x;
	this->y += p.y;
	return *this;
}

cPoint cPoint::operator+(const cPoint& p)
{
	this->x += p.x;
	this->y += p.y;
	return *this;
}

cPoint cPoint::operator=(const cPoint& p)
{
	this->x = p.x;
	this->y = p.y;
	return *this;
}

Cadre::Cadre()
{
	this->pointAndrage = cPoint(10, 5);
	this->width = 2;
	this->heigth = 5;
	this->drawing = '*';
}

void Cadre::show() const
{
	cout << "x : " << this->pointAndrage.x << " y : " << this->pointAndrage.y << endl;
	cout << "w : " << this->getWidth() << " h : " << this->getHeigth() << endl;
	for (int i = 0; i < this->getHeigth(); i++)
	{
		for (int j = 0; j < this->getWidth(); j++)
			cout << this->getDrawing();
		cout << endl;
	}
	cout << endl;

	cout << "area : " << this->getArea() << endl;
	cout << "perimeter : " << this->getPerimeter() << endl;
	cout << "square Y/N : " << this->isSquare() << endl;
}

float Cadre::getArea() const
{
	return this->getHeigth() * this->getWidth();
}

float Cadre::getPerimeter() const
{
	return this->getWidth()*2 + this->getHeigth()*2;
}

void Cadre::setWidth(float width)
{
	this->width = width;
}

void Cadre::setHeigth(float heigth)
{
	this->heigth = heigth;
}

void Cadre::setDrawing(char draw)
{
	this->drawing = draw;
}

float Cadre::getWidth() const
{
	return this->width;
}

float Cadre::getHeigth() const
{
	return this->heigth;
}

char Cadre::getDrawing() const
{
	return this->drawing;
}

bool Cadre::isSquare() const
{
	return (this->width == this->heigth);
}

Cadre::~Cadre()
{

}
