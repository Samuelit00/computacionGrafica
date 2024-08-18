#include "Colita.h"



void Colita::DibujarCola(float Angulo, int n, float x,float y, float z) {

	glPushMatrix();
		glTranslated(x, y, z);
		glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
		glTranslatef(1.0, 0.0, 0.0); 
		glPushMatrix();
		glScalef(2.0, 0.4, 1.0);
		glutSolidCone(1.0, 10, 2, 5);
		glPopMatrix();

		for (int i = 0; i < n; i++) {
			glTranslatef(1.0, 0.0, 0.0);
			glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
			glTranslatef(1.0, 0.0, 0.0);
			glPushMatrix();
			glScalef(2.0, 0.4, 1.0);
			glutSolidCone(1.0, 10, 2, 5);
			//glutWireCube(1.0);
			glPopMatrix();
		}
	glPopMatrix();
};