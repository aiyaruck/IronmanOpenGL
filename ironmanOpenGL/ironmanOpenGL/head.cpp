#include <stdlib.h>
#include <gl/glut.h>

void head()
{
	GL_LINE_SMOOTH;
	glBegin(GL_POLYGON); //main Head
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
	glBegin(GL_LINE_LOOP); //main Head Border
	glColor3f(0.000, 0.000, 0.000);
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
	glBegin(GL_LINE_LOOP); //In Head Border
	glColor3f(0.000, 0.000, 0.000);
	glVertex2f(-15.96, 10.27);
	glVertex2f(-16.45, 10.32);
	glVertex2f(-16.20, 9.90);
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
	glBegin(GL_LINE_STRIP); //In Head3
	glColor3f(0.000, 0.000, 0.000);
	glVertex2f(-16.23, 10.06);
	glVertex2f(-16.81, 10.27);
	glVertex2f(-17.60, 10.27);
	glEnd();
	glBegin(GL_QUADS); //Left Eye
	glColor3f(1.000, 1.000, 1.000);
	glVertex2f(-18.30, 8.51);
	glVertex2f(-18.57, 8.09);
	glVertex2f(-17.34, 7.82);
	glVertex2f(-17.08, 8.25);
	glEnd();
	glBegin(GL_LINE_LOOP); //Left Eye Border
	glColor3f(0.000, 0.749, 1.000);
	glVertex2f(-18.30, 8.51);
	glVertex2f(-18.57, 8.09);
	glVertex2f(-17.34, 7.82);
	glVertex2f(-17.08, 8.25);
	glEnd();
	glBegin(GL_LINES); //Link Eye
	glColor3f(0, 0, 0);
	glVertex2f(-17.08, 8.25);
	glVertex2f(-16.12, 8.14);
	glEnd();
	glBegin(GL_QUADS); //Right Eye
	glColor3f(1.000, 1.000, 1.000);
	glVertex2f(-16.12, 8.14);
	glVertex2f(-15.96, 7.71);
	glVertex2f(-15.59, 7.71);
	glVertex2f(-15.54, 8.19);
	glEnd();
	glBegin(GL_LINE_LOOP); //Right Eye Border
	glColor3f(0.000, 0.749, 1.000);
	glVertex2f(-16.12, 8.14);
	glVertex2f(-15.96, 7.71);
	glVertex2f(-15.59, 7.71);
	glVertex2f(-15.54, 8.19);
	glEnd();
	glBegin(GL_LINE_STRIP); //Mouse
	glColor3f(0.000, 0.000, 0.000);
	glVertex2f(-18.41, 6.28);
	glVertex2f(-17.88, 5.96);
	glVertex2f(-17.19, 6.25);
	glVertex2f(-16.12, 6.25);
	glVertex2f(-15.90, 5.96);
	glEnd();
	glBegin(GL_POLYGON); //Ear
	glColor3f(0.698, 0.133, 0.133);
	glVertex2f(-19.95, 8.73);
	glVertex2f(-19.63, 8.46);
	glVertex2f(-19.47, 8.09);
	glVertex2f(-19.53, 7.61);
	glVertex2f(-19.79, 7.24);
	glVertex2f(-20.11, 7.50);
	glVertex2f(-20.27, 7.93);
	glVertex2f(-20.32, 8.25);
	glVertex2f(-20.32, 8.57);
	glEnd();
	glBegin(GL_LINE_LOOP); //Ear Border
	glColor3f(0.000, 0.000, 0.000);
	glVertex2f(-19.95, 8.73);
	glVertex2f(-19.63, 8.46);
	glVertex2f(-19.47, 8.09);
	glVertex2f(-19.53, 7.61);
	glVertex2f(-19.79, 7.24);
	glVertex2f(-20.11, 7.50);
	glVertex2f(-20.27, 7.93);
	glVertex2f(-20.32, 8.25);
	glVertex2f(-20.32, 8.57);
	glEnd();
	glBegin(GL_LINE_STRIP); //neck 1
	glColor3f(0.000, 0.000, 0.000);
	glVertex2f(-20.30, 6.33);
	glVertex2f(-19.95, 6.07);
	glVertex2f(-19.63, 5.80);
	glVertex2f(-19.31, 5.53);
	glVertex2f(-18.78, 5.21);
	glVertex2f(-18.25, 5.00);
	glVertex2f(-17.72, 4.89);
	glVertex2f(-17.29, 4.84);
	glVertex2f(-16.45, 4.95);
	glEnd();
	glBegin(GL_LINE_STRIP); //neck 2
	glColor3f(0.000, 0.000, 0.000);
	glVertex2f(-19.05, 4.58);
	glVertex2f(-18.73, 4.47);
	glVertex2f(-18.36, 4.36);
	glVertex2f(-17.93, 4.31);
	glVertex2f(-17.50, 4.26);
	glVertex2f(-17.24, 4.31);
	glVertex2f(-16.75, 4.36);
	glEnd();
	glFlush();
}
void body()
{
	//GL_LINE_SMOOTH_HINT;
	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-22.73, 7.98);
		glVertex2f(-23.14, 7.88);
	glEnd();
	
	glFlush();
}
void display(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	head();
	body();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1290, 625);
	glutInitWindowPosition(40,80);
	glutCreateWindow("Ironman");
	glutReshapeFunc;
	gluOrtho2D(-30.0, 30.0, -16.0, 16.0);
	glutDisplayFunc(display);
	glutMainLoop();
}