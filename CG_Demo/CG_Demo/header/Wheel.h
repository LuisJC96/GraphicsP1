#pragma once
#ifdef _APPLE_

#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#endif
#ifdef _WIN32

#endif
#ifdef _unix_

#endif
class Wheel
{
public:
	Wheel();
	Wheel(float _x, float _y, float _z, float _r, float _g, float _b )
	{
		x = _x;
		y = _y;
		z = _z;
		r = _r;
		g = _g;
		b = _b;
	}
	~Wheel();
	float x, y, z;
	float r, g, b;
	float rotX;
	void draw();
	void update();
};

