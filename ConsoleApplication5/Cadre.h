#pragma once
#include <string>
#include <iostream>

using namespace std;

class cPoint
{
private:

public:
	float x;
	float y;
	cPoint();
	cPoint(float x, float y);
	cPoint operator+=(const cPoint& p);
	cPoint operator+(const cPoint& p);
	cPoint operator=(const cPoint& p);

};

class Cadre
{
private :
	cPoint pointAndrage;
	float width;
	float heigth;
	char drawing;

public:
	Cadre();
	void show() const;
	float getArea() const;
	float getPerimeter() const;
	void setWidth(float width);
	void setHeigth(float heigth);
	void setDrawing(char draw);

	float getWidth() const;
	float getHeigth() const;
	char getDrawing() const;

	bool isSquare() const;

	~Cadre();

};

