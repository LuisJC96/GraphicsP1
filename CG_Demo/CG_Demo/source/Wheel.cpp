#include "Wheel.h"

#ifdef _APPLE_
// For XCode only: New C++ terminal project. Build phases->Compile with libraries: add OpenGL and GLUT
// Import this whole code into a new C++ file (main.cpp, for example). Then run.
// Reference: https://en.wikibooks.org/wiki/OpenGL_Programming/Installation/Mac
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#endif
#ifdef _WIN32
// For VS on Windows only: Download CG_Demo.zip. UNZIP FIRST. Double click on CG_Demo/CG_Demo.sln
// Run
#include "freeglut.h"
#endif
#ifdef _unix_
// For Linux users only: g++ CG_Demo.cpp -lglut -lGL -o CG_Demo
// ./CG_Demo
// Reference: https://www.linuxjournal.com/content/introduction-opengl-programming
#include "GL/freeglut.h"
#include "GL/gl.h"
#endif



Wheel::Wheel()
{
	y = z = x = 0;
	rotX = r = g = b = 1;


}


Wheel::~Wheel()
{
}

void Wheel::draw() {
	glPushMatrix(); {
		glColor3f(r, g, b);
		glTranslatef(x, y, z);
		glRotatef(rotX,1,0,0);
		glScalef(.2,1,1);
		glutWireSphere(1, 10, 10);
	}
	glPopMatrix(); {

	}
}

void Wheel::update() {
	rotX += .15f;
}