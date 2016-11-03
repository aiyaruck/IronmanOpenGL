#include <stdlib.h>
#include <gl/glut.h>
void display(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON); //Head
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-17.93, 11.17);
		glVertex2f(-16.49, 10.85);
		glVertex2f(-15.64, 9.95);
		glVertex2f(-15.38, 9.20);
		glVertex2f(-15.27, 7.08);
		glVertex2f(-15.64, 6.38);
		glVertex2f(-16.12, 5.59);
		glVertex2f(-17.13, 3.67);
		glVertex2f(-17.88, 3.83);
		glVertex2f(-18.30, 3.78);
		glVertex2f(-18.57, 3.67);
		glVertex2f(-18.67, 3.99);
		glVertex2f(-19.05, 4.58);
		glVertex2f(-19.42, 5.00);
		glVertex2f(-19.74, 5.32);
		glVertex2f(-20.16, 5.64);
		glVertex2f(-20.54, 6.01);
		glVertex2f(-20.27, 6.33);
		glVertex2f(-20.32, 6.76);
		glVertex2f(-20.43, 7.18);
		glVertex2f(-20.43, 7.50);
		glVertex2f(-20.54, 7.93);
		glVertex2f(-20.59, 8.30);
		glVertex2f(-20.59, 8.83);
		glVertex2f(-20.48, 9.36);
		glVertex2f(-20.27, 9.90);
		glVertex2f(-19.90, 10.37);
		glVertex2f(-19.69, 10.57);
		glVertex2f(-19.05, 11.12);
		glVertex2f(-18.36, 11.23);
	glEnd();

	glBegin(GL_POLYGON); //In Head
		glColor3f(1.000, 0.843, 0.000);
		glVertex2f(-15.96, 10.27);
		glVertex2f(-16.39, 10.32);
		glVertex2f(-16.01, 9.90);
		glVertex2f(-16.07, 9.52);
		glVertex2f(-16.49, 9.58);
		glVertex2f(-17.03, 9.58);
		glVertex2f(-17.66, 10.27);
		glVertex2f(-17.93, 10.64);
		glVertex2f(-18.73, 10.53);
		glVertex2f(-19.31, 10.32);
		glVertex2f(-19.10, 9.68);
		glVertex2f(-18.94, 8.99);
		glVertex2f(-18.73, 8.67);
		glVertex2f(-19.10, 8.35);
		glVertex2f(-19.26, 7.77);
		glVertex2f(-18.99, 7.61);
		glVertex2f(-18.62, 7.34);
		glVertex2f(-18.41, 7.02);
		glVertex2f(-18.30, 6.65);
		glVertex2f(-18.41, 6.28);
		glVertex2f(-18.57, 5.75);
		glVertex2f(-17.93, 5.43);
		glVertex2f(-17.13, 5.64);
		glVertex2f(-16.12, 5.59);
		glVertex2f(-15.64, 6.38);
		glVertex2f(-15.27, 7.08);
		glVertex2f(-15.27, 8.35);
		glVertex2f(-15.38, 9.20);
		glVertex2f(-15.64, 9.95);
		glEnd();
		glBegin(GL_POLYGON); //In Head2
			glColor3f(0.545, 0.000, 0.000);
			glVertex2f(-17.93, 10.64);
			glVertex2f(-17.34, 9.95);
			glVertex2f(-17.03, 9.58);
			glVertex2f(-16.07, 9.52);
			glVertex2f(-16.37, 10.36);
			glEnd();
			
					

	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1290, 625);
	glutInitWindowPosition(40,80);
	glutCreateWindow("Head Ironman");
	glutReshapeFunc;
	gluOrtho2D(-30.0, 30.0, -16.0, 16.0);
	glutDisplayFunc(display);
	glutMainLoop();
}