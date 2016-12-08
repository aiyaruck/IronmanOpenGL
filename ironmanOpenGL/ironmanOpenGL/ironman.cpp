#include <stdlib.h>
#include <stdio.h>
#include <gl/glut.h>
#include <math.h>

#define PI 3.1415926535898

float backgroundRed = 0.686;
float backgroundGreen = 0.933;
float backgroundBlue = 0.933;
float CloudRed = 0.961;
float CloudGreen = 0.961;
float CloudBlue = 0.961;
float windowsRed = 1;
float windowsGreen = 1;
float windowsBlue = 1;
float backgroundAlpha = 0;
float speedIronD = 0.00;
float speedIronW = 0.00;
float speedCloud = -20.00;
float degreeleg = 0.00;
float degreearm = 0.00;
float setbeam = 80.00;
float beamEX = 0.00;
float sunScale = 1.00;
float speedColor = 0.00;
float speedColor2 = 0.00;
float speedSuperAck = 0.00;
float ironStart = 0.5;
int StartbeamEX = 0;
int setColorWindows = 0;
int startJet = 0;

void MyCircle2f(GLfloat centerx, GLfloat centery, GLfloat radius)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;

	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radius*cos(theta), centery + radius*sin(theta));
	}
	glEnd();
}

void MySemiCircle2f(GLfloat centerx, GLfloat centery, GLfloat radius)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;

	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = 1 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radius*cos(theta), centery + radius*sin(theta));
	}
	glEnd();
}

void MyEllipse(GLfloat centerx, GLfloat centery, GLfloat radiusx, GLfloat radiusy)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radiusx*cos(theta), centery + radiusy*sin(theta));
	}
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void MyEllipse2(GLfloat centerx, GLfloat centery, GLfloat radiusx, GLfloat radiusy)
{
	GLint i;
	GLdouble theta;
	GLint circle_points = 100;
	glBegin(GL_POLYGON);
	for (i = 0; i < circle_points; i++)
	{
		theta = 2 * PI*i / circle_points; // angle in radians
		glVertex2f(centerx + radiusx*cos(theta), centery + radiusy*sin(theta));
	}
	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void cloud()
{
	glBegin(GL_POLYGON);
		glColor3f(CloudRed, CloudGreen, CloudBlue);
		glVertex2f(22.40, 15.91);
		glVertex2f(22.40, 15.06);
		glVertex2f(22.45, 13.94);
		glVertex2f(21.55, 14.10);
		glVertex2f(21.23, 14.26);
		glVertex2f(21.02, 14.52);
		glVertex2f(20.96, 14.90);
		glVertex2f(21.07, 15.27);
		glVertex2f(21.23, 15.70);
		glVertex2f(21.60, 15.91);
		glVertex2f(22.03, 15.96);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(22.45, 13.94);
		glVertex2f(22.40, 15.06);
		glVertex2f(22.40, 15.91);
		glVertex2f(22.61, 16.23);
		glVertex2f(22.88, 16.39);
		glVertex2f(23.36, 16.55);
		glVertex2f(23.78, 15.22);
		glVertex2f(23.89, 13.94);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(23.89, 13.94);
		glVertex2f(23.78, 15.22);
		glVertex2f(23.36, 16.55);
		glVertex2f(23.84, 16.81);
		glVertex2f(24.10, 17.03);
		glVertex2f(24.53, 17.24);
		glVertex2f(24.90, 17.40);
		glVertex2f(25.27, 17.50);
		glVertex2f(25.70, 17.50);
		glVertex2f(26.12, 17.50);
		glVertex2f(26.39, 17.34);
		glVertex2f(26.66, 17.13);
		glVertex2f(26.92, 16.92);
		glVertex2f(27.19, 16.60);
		glVertex2f(27.40, 16.28);
		glVertex2f(27.56, 15.11);
		glVertex2f(27.83, 13.89);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(27.40, 16.28);
		glVertex2f(27.56, 15.11);
		glVertex2f(27.83, 13.89);
		glVertex2f(28.15, 14.05);
		glVertex2f(28.46, 14.21);
		glVertex2f(28.68, 14.47);
		glVertex2f(28.89, 14.79);
		glVertex2f(28.94, 15.16);
		glVertex2f(28.89, 14.79);
		glVertex2f(28.94, 15.16);
		glVertex2f(28.89, 15.48);
		glVertex2f(28.73, 15.86);
		glVertex2f(28.52, 16.07);
		glVertex2f(28.20, 16.12);
		glVertex2f(27.88, 16.28);
	glEnd();
}

void head()
{
	GL_LINE_SMOOTH;
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
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
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glLineWidth(1);
	glBegin(GL_POLYGON); //main Head Border
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
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON); //In Head
		glColor3f(1.000, 0.750, 0.000);
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
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glLineWidth(1);
		glBegin(GL_POLYGON); //In Head Border
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
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			glBegin(GL_POLYGON); //In Head2
			glColor3f(0.545, 0.000, 0.000);
			glVertex2f(-17.93, 10.64);
			glVertex2f(-17.34, 9.95);
			glVertex2f(-17.03, 9.58);
			glVertex2f(-16.07, 9.52);
			glVertex2f(-16.37, 10.36);
		glEnd();
		glLineWidth(1);
		glBegin(GL_LINE_STRIP); //In Head3
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-16.23, 10.06);
			glVertex2f(-16.81, 10.27);
			glVertex2f(-17.60, 10.27);
		glEnd();
	glLineWidth(3);
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
	glLineWidth(1);
	glBegin(GL_LINES); //Link Eye
		glColor3f(0, 0, 0);
		glVertex2f(-17.08, 8.25);
		glVertex2f(-16.12, 8.14);
	glEnd();
	glLineWidth(3);
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
	glLineWidth(1.5);
	glBegin(GL_LINE_STRIP); //Mouse
		glColor3f(0.000, 0.000, 0.000);
		glVertex2f(-18.41, 6.28);
		glVertex2f(-17.88, 5.96);
		glVertex2f(-17.19, 6.25);
		glVertex2f(-16.12, 6.25);
		glVertex2f(-15.90, 5.96);
	glEnd();
	glLineWidth(1);
	glBegin(GL_POLYGON); //Ear
		glColor3f(0.755, 0.000, 0.000);
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
	glLineWidth(1);
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
}

void body()
{
	glLineWidth(1);
	GL_LINE_SMOOTH_HINT;
	for (int i = 0; i < 2; i++){
		if (i == 0){ glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); }
		if (i == 1) { glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); }
		glBegin(GL_POLYGON); //Main Body
		glColor3f(0.000, 0.000, 0.000);
		if (i == 1) { glColor3f(0.545, 0.000, 0.000); }
		glVertex2f(-20.54, 6.01);
		glVertex2f(-20.91, 5.91);
		glVertex2f(-21.28, 5.69);
		glVertex2f(-21.60, 5.69);
		glVertex2f(-22.08, 5.69);
		glVertex2f(-22.56, 5.64);
		glVertex2f(-22.98, 5.53);
		glVertex2f(-23.73, 5.16);
		glVertex2f(-24.10, 4.49);
		glVertex2f(-24.00, 4.42);
		glVertex2f(-23.52, 4.42);
		glVertex2f(-23.09, 4.36);
		glVertex2f(-22.56, 4.20);
		glVertex2f(-22.19, 3.99);
		glVertex2f(-21.97, 3.56);
		glVertex2f(-21.97, 3.14);
		glVertex2f(-21.97, 2.82);
		glVertex2f(-22.40, 2.29);
		glVertex2f(-22.82, 2.13);
		glVertex2f(-23.30, 2.07);
		glVertex2f(-23.25, 1.65);
		glVertex2f(-23.14, 1.38);
		glVertex2f(-22.88, 0.90);
		glVertex2f(-22.51, 0.48);
		glVertex2f(-22.35, 0.16);
		glVertex2f(-22.19, -0.21);
		glVertex2f(-22.35, -1.81);
		glVertex2f(-22.03, -1.76);
		glVertex2f(-21.65, -1.70);
		glVertex2f(-21.34, -1.76);
		glVertex2f(-20.96, -1.86);
		glVertex2f(-20.70, -1.97);
		glVertex2f(-20.38, -2.39);
		glVertex2f(-20.22, -2.71);
		glVertex2f(-19.85, -2.93);
		glVertex2f(-19.47, -3.03);
		glVertex2f(-19.05, -3.14);
		glVertex2f(-18.67, -3.14);
		glVertex2f(-18.20, -3.03);
		glVertex2f(-17.88, -2.87);
		glVertex2f(-17.72, -2.50);
		glVertex2f(-17.56, -2.02);
		glVertex2f(-17.29, -1.44);
		glVertex2f(-17.13, -0.90);
		glVertex2f(-16.87, -0.37);
		glVertex2f(-16.44, 0.00);
		glVertex2f(-16.12, 0.43);
		glVertex2f(-15.96, 0.85);
		glVertex2f(-15.80, 1.49);
		glVertex2f(-15.75, 1.97);
		glVertex2f(-15.59, 2.50);
		glVertex2f(-15.64, 2.87);
		glVertex2f(-15.80, 3.14);
		glVertex2f(-15.43, 3.25);
		glVertex2f(-15.00, 3.30);
		glVertex2f(-14.47, 3.41);
		glVertex2f(-14.42, 3.09);
		glVertex2f(-14.58, 3.78);
		glVertex2f(-15.06, 4.26);
		glVertex2f(-15.38, 4.63);
		glVertex2f(-15.80, 4.79);
		glVertex2f(-16.28, 4.84);
		glVertex2f(-16.87, 4.36);
		glVertex2f(-17.50, 3.72);
		glVertex2f(-17.88, 3.83);
		glVertex2f(-18.57, 3.67);
		glVertex2f(-18.67, 3.99);
		glVertex2f(-18.73, 4.47);
		glVertex2f(-19.42, 5.00);
		glVertex2f(-19.74, 5.32);
		glVertex2f(-20.16, 5.64);
		glEnd();
	}
	glBegin(GL_POLYGON); // Left Shoulder
		glColor3f(0.655, 0.00, 0.00);
		glVertex2f(-22.08, 5.69);
		glVertex2f(-22.56, 5.64);
		glVertex2f(-22.98, 5.53);
		glVertex2f(-23.46, 5.37);
		glVertex2f(-23.73, 5.16);
		glVertex2f(-24.10, 4.79);
		glVertex2f(-24.00, 4.42);
		glVertex2f(-23.52, 4.42);
		glVertex2f(-23.09, 4.36);
		glVertex2f(-22.56, 4.20);
		glVertex2f(-22.19, 3.99);
		glVertex2f(-21.97, 3.83);
		glVertex2f(-21.71, 3.46);
		glVertex2f(-21.44, 3.25);
		glVertex2f(-20.91, 3.56);
		glVertex2f(-20.43, 3.83);
		glVertex2f(-20.43, 4.20);
		glVertex2f(-20.59, 4.52);
	glEnd();
		glBegin(GL_LINE_LOOP); // Left Shoulder Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-22.08, 5.69);
			glVertex2f(-22.56, 5.64);
			glVertex2f(-22.98, 5.53);
			glVertex2f(-23.46, 5.37);
			glVertex2f(-23.73, 5.16);
			glVertex2f(-24.10, 4.79);
			glVertex2f(-24.00, 4.42);
			glVertex2f(-23.52, 4.42);
			glVertex2f(-23.09, 4.36);
			glVertex2f(-22.56, 4.20);
			glVertex2f(-22.19, 3.99);
			glVertex2f(-21.97, 3.83);
			glVertex2f(-21.71, 3.46);
			glVertex2f(-21.44, 3.25);
			glVertex2f(-20.91, 3.56);
			glVertex2f(-20.43, 3.83);
			glVertex2f(-20.43, 4.20);
			glVertex2f(-20.59, 4.52);
		glEnd();

	glBegin(GL_POLYGON); // Right Shoulder
		glColor3f(0.455, 0.000, 0.000);
		glVertex2f(-16.87, 4.36);
		glVertex2f(-16.60, 4.20);
		glVertex2f(-16.33, 4.04);
		glVertex2f(-16.12, 3.78);
		glVertex2f(-15.96, 3.51);
		glVertex2f(-15.80, 3.14);
		glVertex2f(-15.43, 3.25);
		glVertex2f(-15.00, 3.30);
		glVertex2f(-14.42, 3.09);
		glVertex2f(-14.47, 3.41);
		glVertex2f(-14.58, 3.78);
		glVertex2f(-15.06, 4.26);
		glVertex2f(-15.38, 4.63);
		glVertex2f(-15.80, 4.79);
		glVertex2f(-16.28, 4.84);
		glVertex2f(-16.71, 4.63);
	glEnd();
		glBegin(GL_LINE_LOOP); // Right Shoulder Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-16.87, 4.36);
			glVertex2f(-16.60, 4.20);
			glVertex2f(-16.33, 4.04);
			glVertex2f(-16.12, 3.78);
			glVertex2f(-15.96, 3.51);
			glVertex2f(-15.80, 3.14);
			glVertex2f(-15.43, 3.25);
			glVertex2f(-15.00, 3.30);
			glVertex2f(-14.42, 3.09);
			glVertex2f(-14.47, 3.41);
			glVertex2f(-14.58, 3.78);
			glVertex2f(-15.06, 4.26);
			glVertex2f(-15.38, 4.63);
			glVertex2f(-15.80, 4.79);
			glVertex2f(-16.28, 4.84);
			glVertex2f(-16.71, 4.63);
		glEnd();
	glBegin(GL_POLYGON); //Breast
		glColor3f(0.755, 0.000, 0.000);
		glVertex2f(-19.05, 4.36);
		glVertex2f(-19.74, 4.31);
		glVertex2f(-20.38, 4.10);
		glVertex2f(-20.48, 3.83);
		glVertex2f(-21.12, 3.35);//5
		glVertex2f(-20.80, 2.87);
		glVertex2f(-20.48, 2.45);
		glVertex2f(-19.63, 1.17);
		glVertex2f(-18.59, 0.96);
		glVertex2f(-18.04, 0.85);
		glVertex2f(-17.45, 0.90);
		glVertex2f(-16.81, 0.96);
		glVertex2f(-16.49, 1.38);
		glVertex2f(-16.28, 1.81);
		glVertex2f(-16.12, 2.23);
		glVertex2f(-15.96, 2.66);
		glVertex2f(-15.86, 3.03);
		glVertex2f(-15.64, 3.30);
		glVertex2f(-15.91, 3.67);
		glVertex2f(-16.28, 3.99);
		glVertex2f(-16.40, 4.20);
		glVertex2f(-16.76, 4.31);
		glVertex2f(-17.13, 3.67);
		glVertex2f(-17.61, 3.78);
		glVertex2f(-17.88, 3.83);
		glVertex2f(-18.25, 3.78);
		glVertex2f(-18.52, 3.62);
	glEnd();
		glBegin(GL_LINE_LOOP); //Breast Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-19.05, 4.36);
			glVertex2f(-19.74, 4.31);
			glVertex2f(-20.38, 4.10);
			glVertex2f(-20.48, 3.83);
			glVertex2f(-21.12, 3.35);//5
			glVertex2f(-20.80, 2.87);
			glVertex2f(-20.48, 2.45);
			glVertex2f(-19.63, 1.17);
			glVertex2f(-18.59, 0.96);
			glVertex2f(-18.04, 0.85);
			glVertex2f(-17.45, 0.90);
			glVertex2f(-16.81, 0.96);
			glVertex2f(-16.49, 1.38);
			glVertex2f(-16.28, 1.81);
			glVertex2f(-16.12, 2.23);
			glVertex2f(-15.96, 2.66);
			glVertex2f(-15.86, 3.03);
			glVertex2f(-15.64, 3.30);
			glVertex2f(-15.91, 3.67);
			glVertex2f(-16.28, 3.99);
			glVertex2f(-16.40, 4.20);
			glVertex2f(-16.76, 4.31);
			glVertex2f(-17.13, 3.67);
			glVertex2f(-17.61, 3.78);
			glVertex2f(-17.88, 3.83);
			glVertex2f(-18.25, 3.78);
			glVertex2f(-18.52, 3.62);
		glEnd();
		glBegin(GL_POLYGON); //Belly
			glColor3f(0.655, 0.000, 0.000);
			glVertex2f(-19.37, 1.01);
			glVertex2f(-19.95, 0.64);
			glVertex2f(-20.48, -0.16);
			glVertex2f(-19.85, -2.87);
			glVertex2f(-19.10, -3.09);
			glVertex2f(-18.41, -3.09);
			glVertex2f(-17.88, -2.87);
			glVertex2f(-17.61, -2.18);
			glVertex2f(-16.87, -0.32);
			glVertex2f(-16.71, 0.43);
			glVertex2f(-16.81, 0.96);
			glVertex2f(-17.45, 0.90);
			glVertex2f(-18.04, 0.85);
			glVertex2f(-18.89, 0.96);
		glEnd();
			glBegin(GL_LINE_LOOP); //Belly Border
				glColor3f(0.000, 0.000, 0.000);
				glVertex2f(-19.37, 1.01);
				glVertex2f(-19.95, 0.64);
				glVertex2f(-20.48, -0.16);
				glVertex2f(-19.85, -2.87);
				glVertex2f(-19.10, -3.09);
				glVertex2f(-18.41, -3.09);
				glVertex2f(-17.88, -2.87);
				glVertex2f(-17.61, -2.18);
				glVertex2f(-16.87, -0.32);
				glVertex2f(-16.71, 0.43);
				glVertex2f(-16.81, 0.96);
				glVertex2f(-17.45, 0.90);
				glVertex2f(-18.04, 0.85);
				glVertex2f(-18.89, 0.96);
			glEnd();
			glLineWidth(1);
			glBegin(GL_LINE_STRIP); // Muscle 1
				glColor3f(0.000, 0.000, 0.000);
				glVertex2f(-19.95, 0.64);
				glVertex2f(-19.37, -0.21);
				glVertex2f(-18.67, -0.48);
				glVertex2f(-17.93, -0.53);
				glVertex2f(-16.80, -0.10);
			glEnd();
			glBegin(GL_LINE_STRIP); // Muscle 2
				glColor3f(0.000, 0.000, 0.000);
				glVertex2f(-20.48, -0.16);
				glVertex2f(-19.69, -1.28);
				glVertex2f(-18.94, -1.44);
				glVertex2f(-18.09, -1.54);
				glVertex2f(-17.20, -1.25);
			glEnd();
			glBegin(GL_LINE_STRIP); // Muscle 3
				glColor3f(0.000, 0.000, 0.000);
				glVertex2f(-20.22, -1.38);
				glVertex2f(-19.74, -2.02);
				glVertex2f(-18.99, -2.33);
				glVertex2f(-18.20, -2.29);
				glVertex2f(-17.61, -2.08);
			glEnd();
	glLineWidth(1);
	glBegin(GL_POLYGON); // Left Lung
		glColor3f(0.655, 0.000, 0.000);
		glVertex2f(-21.39, 3.30);
		glVertex2f(-21.41, 2.71);
		glVertex2f(-21.76, 2.29);
		glVertex2f(-22.40, 1.97);
		glVertex2f(-23.30, 2.10);
		glVertex2f(-23.14, 1.33);
		glVertex2f(-22.24, 0.00);
		glVertex2f(-21.28, -0.16);
		glVertex2f(-20.48, -0.16);
		glVertex2f(-19.95, 0.64);
		glVertex2f(-19.63, 1.17);
		glVertex2f(-20.06, 1.92);
		glVertex2f(-20.48, 2.45);
		glVertex2f(-20.80, 2.87);
		glVertex2f(-21.12, 3.35);
	glEnd();
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glBegin(GL_POLYGON); //Left Lung Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-21.39, 3.30);
			glVertex2f(-23.30, 2.10);
			glVertex2f(-23.14, 1.33);
			glVertex2f(-22.24, 0.00);
			glVertex2f(-21.28, -0.16);
			glVertex2f(-20.48, -0.16);
			glVertex2f(-19.95, 0.64);
			glVertex2f(-19.63, 1.17);
			glVertex2f(-20.06, 1.92);
			glVertex2f(-20.48, 2.45);
			glVertex2f(-20.80, 2.87);
			glVertex2f(-21.12, 3.35);
		glEnd();
		glLineWidth(1);
		glBegin(GL_LINE_STRIP); //Left Lung2
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-23.20, 2.02);
			glVertex2f(-23.14, 1.33);
			glVertex2f(-22.35, 0.90);
			glVertex2f(-21.23, 0.64);
			glVertex2f(-20.70, 1.33);
			glVertex2f(-20.06, 1.92);
		glEnd();
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		glBegin(GL_POLYGON); //Left Lung3
			glColor3f(1.000, 0.843, 0.00);
			glVertex2f(-21.87, 0.80);
			glVertex2f(-21.65, 1.22);
			glVertex2f(-21.34, 1.54);
			glVertex2f(-20.91, 1.92);
			glVertex2f(-20.38, 2.18);
			glVertex2f(-20.06, 1.92);
			glVertex2f(-20.70, 1.33);
			glVertex2f(-21.23, 0.64);
		glEnd();
			glLineWidth(1);
			glBegin(GL_LINE_STRIP); //Left Lung3 Border
				glColor3f(0,0,0);
				glVertex2f(-21.87, 0.80);
				glVertex2f(-21.65, 1.22);
				glVertex2f(-21.34, 1.54);
				glVertex2f(-20.91, 1.92);
				glVertex2f(-20.38, 2.18);
				glVertex2f(-20.06, 1.92);
				glVertex2f(-20.70, 1.33);
				glVertex2f(-21.23, 0.64);
			glEnd();
	glBegin(GL_POLYGON); //Right Lung
		glColor3f(0.455, 0.000, 0.000);
		glVertex2f(-15.64, 2.77);
		glVertex2f(-15.64, 2.18);
		glVertex2f(-15.75, 1.70);
		glVertex2f(-15.91, 0.96);
		glVertex2f(-16.12, 0.53);
		glVertex2f(-16.39, 0.00);
		glVertex2f(-16.87, -0.32);
		glVertex2f(-16.71, 0.43);
		glVertex2f(-16.81, 0.96);
		glVertex2f(-16.49, 1.38);
		glVertex2f(-16.28, 1.81);
		glVertex2f(-16.12, 2.23);
		glVertex2f(-15.96, 2.66);
		glVertex2f(-15.86, 3.03);
	glEnd();
		glBegin(GL_LINE_STRIP); //Right Lung Border
			glColor3f(0,0,0);
			glVertex2f(-15.64, 2.77);
			glVertex2f(-15.64, 2.18);
			glVertex2f(-15.75, 1.70);
			glVertex2f(-15.91, 0.96);
			glVertex2f(-16.12, 0.53);
			glVertex2f(-16.39, 0.00);
			glVertex2f(-16.87, -0.32);
			glVertex2f(-16.71, 0.43);
			glVertex2f(-16.81, 0.96);
			glVertex2f(-16.49, 1.38);
			glVertex2f(-16.28, 1.81);
			glVertex2f(-16.12, 2.23);
			glVertex2f(-15.96, 2.66);
			glVertex2f(-15.86, 3.03);
		glEnd();
		glBegin(GL_POLYGON); //Left Lung3
			glColor3f(1.000, 0.843, 0.00);
			glVertex2f(-16.17, 2.02);
			glVertex2f(-16.33, 1.60);
			glVertex2f(-15.96, 0.96);
			glVertex2f(-15.86, 1.33);
		glEnd();
	glBegin(GL_TRIANGLES); // neck 1
		glColor3f(0.827, 0.827, 0.827);
		glVertex2f(-18.78, 3.94);
		glVertex2f(-19.69, 4.04);
		glVertex2f(-19.05, 4.26);
	glEnd();
		glBegin(GL_LINE_LOOP); // neck 1 Border
			glColor3f(0,0,0);
			glVertex2f(-18.78, 3.94);
			glVertex2f(-19.69, 4.04);
			glVertex2f(-19.05, 4.26);
		glEnd();
	glBegin(GL_TRIANGLES); // neck 1
	glColor3f(0.827, 0.827, 0.827);
		glVertex2f(-16.87, 4.20);
		glVertex2f(-16.49, 3.88);
		glVertex2f(-16.97, 3.88);
	glEnd();
		glBegin(GL_LINE_LOOP); // neck 1 Border
			glColor3f(0, 0, 0);
			glVertex2f(-16.87, 4.20);
			glVertex2f(-16.49, 3.88);
			glVertex2f(-16.97, 3.88);
		glEnd();
	glLineWidth(2);
	glBegin(GL_LINES); //Details1
		glColor3f(1.000, 0.843, 0.00);
		glVertex2f(-21.34, -0.48);
		glVertex2f(-20.43, -0.74);
	glEnd();
		glBegin(GL_LINES); //Details2
			glColor3f(1.000, 0.843, 0.00);
			glVertex2f(-20.18, -1.81);
			glVertex2f(-21.34, -1.44);
		glEnd();
			glBegin(GL_LINES); //Details3
				glColor3f(1.000, 0.843, 0.00);
				glVertex2f(-20.22, -1.38);
				glVertex2f(-21.39, -1.00);
			glEnd();
}

void ack()
{
	glColor3f(0.000, 0.749, 1.000);
	MyCircle2f(-18.14, 2.55, 0.9);

	glColor3f(0.878, 1.000, 1.000);
	MyCircle2f(-18.14, 2.55, 0.7);
}

void underWare()
{
	glBegin(GL_POLYGON);
		glColor3f(0.445, 0.000, 0.000);
		glVertex2f(-22.56, -1.90);
		glVertex2f(-22.13, -1.81);
		glVertex2f(-21.71, -1.70);
		glVertex2f(-21.28, -1.76);
		glVertex2f(-20.86, -1.92);
		glVertex2f(-20.43, -2.19);
		glVertex2f(-20.11, -2.46); //
		glVertex2f(-19.74, -2.88);
		glVertex2f(-19.26, -3.14);
		glVertex2f(-18.78, -3.14);
		glVertex2f(-18.20, -3.03); //
		glVertex2f(-17.82, -2.82);
		glVertex2f(-17.66, -2.34);
		glVertex2f(-17.34, -2.39);
		glVertex2f(-17.66, -3.51);
		glVertex2f(-18.09, -3.72);//
		glVertex2f(-18.73, -4.20);
		glVertex2f(-19.15, -4.42);
		glVertex2f(-19.69, -4.52);
		glVertex2f(-19.95, -4.20);
		glVertex2f(-20.32, -3.83);
		glVertex2f(-20.80, -3.51);
		glVertex2f(-21.02, -3.09);
		glVertex2f(-21.49, -2.66);
		glVertex2f(-21.92, -2.50);
		glVertex2f(-22.45, -2.66);
		glVertex2f(-22.88, -3.03);
		glVertex2f(-22.77, -2.34);
		glVertex2f(-22.56, -2.02);
	glEnd();
		glBegin(GL_LINE_LOOP); //Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-22.56, -1.90);
			glVertex2f(-22.13, -1.81);
			glVertex2f(-21.71, -1.70);
			glVertex2f(-21.28, -1.76);
			glVertex2f(-20.86, -1.92);
			glVertex2f(-20.43, -2.19);
			glVertex2f(-20.11, -2.46); //
			glVertex2f(-19.74, -2.88);
			glVertex2f(-19.26, -3.14);
			glVertex2f(-18.78, -3.14);
			glVertex2f(-18.20, -3.03); //
			glVertex2f(-17.82, -2.82);
			glVertex2f(-17.66, -2.34);
			glVertex2f(-17.34, -2.39);
			glVertex2f(-17.66, -3.51);
			glVertex2f(-18.09, -3.72);//
			glVertex2f(-18.73, -4.20);
			glVertex2f(-19.15, -4.42);
			glVertex2f(-19.69, -4.52);
			glVertex2f(-19.95, -4.20);
			glVertex2f(-20.32, -3.83);
			glVertex2f(-20.80, -3.51);
			glVertex2f(-21.02, -3.09);
			glVertex2f(-21.49, -2.66);
			glVertex2f(-21.92, -2.50);
			glVertex2f(-22.45, -2.66);
			glVertex2f(-22.88, -3.03);
			glVertex2f(-22.77, -2.34);
			glVertex2f(-22.56, -2.02);
		glEnd();
}

void rightArm()
{
	glBegin(GL_POLYGON); //Brachium
		glColor3f(1.000, 0.750, 0.000);
		glVertex2f(-15.86, 1.17);
		glVertex2f(-15.32, 0.90);
		glVertex2f(-15.00, 0.53);
		glVertex2f(-14.52, 0.32);
		glVertex2f(-14.10, 0.21);
		glVertex2f(-13.62, 0.53);
		glVertex2f(-14.05, 0.96);
		glVertex2f(-14.15, 1.44);
		glVertex2f(-14.15, 1.92);
		glVertex2f(-13.94, 2.66);
		glVertex2f(-14.52, 3.14); 
		glVertex2f(-14.84, 3.25);
		glVertex2f(-15.22, 3.30);
		glVertex2f(-15.75, 3.19);
		glVertex2f(-15.64, 2.82);
		glVertex2f(-15.64, 2.29);
		glVertex2f(-15.75, 1.76);
	glEnd();
		glBegin(GL_LINE_LOOP); ///Brachium Border
			glColor3f(0,0,0);
			glVertex2f(-15.86, 1.17);
			glVertex2f(-15.32, 0.90);
			glVertex2f(-15.00, 0.53);
			glVertex2f(-14.52, 0.32);
			glVertex2f(-14.10, 0.21);
			glVertex2f(-13.62, 0.53);
			glVertex2f(-14.05, 0.96);
			glVertex2f(-14.15, 1.44);
			glVertex2f(-14.15, 1.92);
			glVertex2f(-13.94, 2.66);
			glVertex2f(-14.52, 3.14);
			glVertex2f(-14.84, 3.25);
			glVertex2f(-15.22, 3.30);
			glVertex2f(-15.75, 3.19);
			glVertex2f(-15.64, 2.82);
			glVertex2f(-15.64, 2.29);
			glVertex2f(-15.75, 1.76);
		glEnd();
	glBegin(GL_POLYGON);//Forearm
		glColor3f(0.545, 0.000, 0.000); 
		glVertex2f(-13.83, 0.21);
		glVertex2f(-13.19, 0.21);
		glVertex2f(-12.72, 0.43);
		glVertex2f(-12.24, 0.59);
		glVertex2f(-11.76, 0.80);
		glVertex2f(-11.33, 1.06);
		glVertex2f(-11.17, 1.65);
		glVertex2f(-11.44, 1.81);
		glVertex2f(-11.76, 2.13);
		glVertex2f(-11.92, 2.50);
		glVertex2f(-12.02, 2.87);
		glVertex2f(-12.40, 2.61);
		glVertex2f(-12.82, 2.66);
		glVertex2f(-13.30, 2.77);
		glVertex2f(-13.67, 2.77);
		glVertex2f(-13.94, 2.66);
		glVertex2f(-14.05, 2.29);
		glVertex2f(-14.15, 1.92);
		glVertex2f(-14.20, 1.92);
		glVertex2f(-14.05, 0.96);
		glVertex2f(-13.62, 0.53);
	glEnd();
		glBegin(GL_LINE_LOOP);
			glColor3f(0.000, 0.000, 0.000); //Forearm Border
			glVertex2f(-13.83, 0.21);
			glVertex2f(-13.19, 0.21);
			glVertex2f(-12.72, 0.43);
			glVertex2f(-12.24, 0.59);
			glVertex2f(-11.76, 0.80);
			glVertex2f(-11.33, 1.06);
			glVertex2f(-11.17, 1.65);
			glVertex2f(-11.44, 1.81);
			glVertex2f(-11.76, 2.13);
			glVertex2f(-11.92, 2.50);
			glVertex2f(-12.02, 2.87);
			glVertex2f(-12.40, 2.61);
			glVertex2f(-12.82, 2.66);
			glVertex2f(-13.30, 2.77);
			glVertex2f(-13.67, 2.77);
			glVertex2f(-13.94, 2.66);
			glVertex2f(-14.05, 2.29);
			glVertex2f(-14.15, 1.92);
			glVertex2f(-14.20, 1.92);
			glVertex2f(-14.05, 0.96);
		glEnd();
	glBegin(GL_POLYGON); //Hand
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-11.53, 3.35);
		glVertex2f(-11.01, 3.51);
		glVertex2f(-10.53, 3.56);
		glVertex2f(-10.80, 3.35);
		glVertex2f(-11.30, 3.14);
	glEnd();
		glBegin(GL_LINE_LOOP); //Hand Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-11.53, 3.35);
			glVertex2f(-11.01, 3.51);
			glVertex2f(-10.53, 3.56);
			glVertex2f(-10.80, 3.35);
			glVertex2f(-11.30, 3.14);
		glEnd();
	glBegin(GL_POLYGON); //Palm
		glColor3f(0.745, 0.000, 0.000);
		glVertex2f(-11.26, 2.77);
		glVertex2f(-11.92, 2.50);
		glVertex2f(-11.76, 2.13);
		glVertex2f(-11.44, 1.81);
		glVertex2f(-11.17, 1.65);
		glVertex2f(-10.91, 1.49);
		glVertex2f(-10.64, 1.38);
		glVertex2f(-10.27, 1.54);
		glVertex2f(-9.84, 1.54);
		glVertex2f(-9.74, 1.86);
		glVertex2f(-9.68, 2.77);
		glVertex2f(-9.68, 3.09);
		glVertex2f(-10.06, 3.14);
		glVertex2f(-10.37, 3.30);
		glVertex2f(-10.53, 3.56);
		glVertex2f(-10.80, 3.35);
		glVertex2f(-11.17, 3.14);
		glVertex2f(-11.44, 2.82);
	glEnd();
		glBegin(GL_POLYGON); //Palm Border
			glColor3f(0.545, 0.000, 0.000);
			glVertex2f(-11.26, 2.77);
			glVertex2f(-11.92, 2.50);
			glVertex2f(-11.76, 2.13);
			glVertex2f(-11.44, 1.81);
			glVertex2f(-11.17, 1.65);
			glVertex2f(-10.91, 1.49);
			glVertex2f(-10.64, 1.38);
			glVertex2f(-10.27, 1.54);
			glVertex2f(-9.84, 1.54);
			glVertex2f(-9.74, 1.86);
			glVertex2f(-9.68, 2.77);
			glVertex2f(-9.68, 3.09);
			glVertex2f(-10.06, 3.14);
			glVertex2f(-10.37, 3.30);
			glVertex2f(-10.53, 3.56);
			glVertex2f(-10.80, 3.35);
			glVertex2f(-11.17, 3.14);
			glVertex2f(-11.44, 2.82);
		glEnd();

	glBegin(GL_POLYGON); //Thumb
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-11.44, 2.82);
		glVertex2f(-11.33, 3.19);
		glVertex2f(-11.55, 3.56);
		glVertex2f(-11.81, 3.95);
		glVertex2f(-12.56, 4.00);
		glVertex2f(-12.61, 3.79);
		glVertex2f(-12.61, 3.62);
		glVertex2f(-12.34, 3.20);
		glVertex2f(-12.18, 3.09);
		glVertex2f(-12.02, 2.87);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thumb Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-11.44, 2.82);
			glVertex2f(-11.33, 3.19);
			glVertex2f(-11.55, 3.56);
			glVertex2f(-11.81, 3.95);
			glVertex2f(-12.56, 4.00);
			glVertex2f(-12.61, 3.79);
			glVertex2f(-12.61, 3.62);
			glVertex2f(-12.34, 3.20);
			glVertex2f(-12.18, 3.09);
			glVertex2f(-12.02, 2.87);
		glEnd();
	glBegin(GL_POLYGON); //foreFinger
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-10.53, 3.56);
		glVertex2f(-10.27, 3.78);
		glVertex2f(-9.95, 3.94);
		glVertex2f(-9.58, 4.10);
		glVertex2f(-9.31, 4.20);
		glVertex2f(-9.04, 4.26);
		glVertex2f(-8.78, 4.31);
		glVertex2f(-8.46, 4.15);
		glVertex2f(-8.30, 3.83);
		glVertex2f(-8.51, 3.62);
		glVertex2f(-9.42, 3.35);
		glVertex2f(-10.00, 3.14);
		glVertex2f(-10.32, 3.30);
	glEnd();
		glBegin(GL_LINE_LOOP); //foreFinger Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-10.53, 3.56);
			glVertex2f(-10.27, 3.78);
			glVertex2f(-9.95, 3.94);
			glVertex2f(-9.58, 4.10);
			glVertex2f(-9.31, 4.20);
			glVertex2f(-9.04, 4.26);
			glVertex2f(-8.78, 4.31);
			glVertex2f(-8.46, 4.15);
			glVertex2f(-8.30, 3.83);
			glVertex2f(-8.51, 3.62);
			glVertex2f(-9.42, 3.35);
			glVertex2f(-10.00, 3.14);
			glVertex2f(-10.32, 3.30);
		glEnd();
	glBegin(GL_POLYGON); //midFinger
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-9.68, 3.00);
		glVertex2f(-9.31, 2.93);
		glVertex2f(-8.67, 2.93);
		glVertex2f(-8.41, 2.93);
		glVertex2f(-8.09, 2.87);
		glVertex2f(-7.87, 2.66);
		glVertex2f(-7.87, 2.39);
		glVertex2f(-8.03, 2.13);
		glVertex2f(-8.41, 2.23);
		glVertex2f(-8.73, 2.29);
		glVertex2f(-9.10, 2.34);
		glVertex2f(-9.42, 2.29);
		glVertex2f(-10.00, 2.25);
	glEnd();
		glBegin(GL_LINE_LOOP); //midFinger Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-9.68, 3.00);
			glVertex2f(-9.31, 2.93);
			glVertex2f(-8.67, 2.93);
			glVertex2f(-8.41, 2.93);
			glVertex2f(-8.09, 2.87);
			glVertex2f(-7.87, 2.66);
			glVertex2f(-7.87, 2.39);
			glVertex2f(-8.03, 2.13);
			glVertex2f(-8.41, 2.23);
			glVertex2f(-8.73, 2.29);
			glVertex2f(-9.10, 2.34);
			glVertex2f(-9.42, 2.29);
			glVertex2f(-9.63, 2.55);
		glEnd();
	glBegin(GL_POLYGON); //littleFinger
		glColor3f(0.545, 0.000, 0.000);
		glVertex2f(-9.87, 2.28);
		glVertex2f(-9.15, 2.02);
		glVertex2f(-8.83, 1.86);
		glVertex2f(-8.51, 1.65);
		glVertex2f(-8.51, 1.33);
		glVertex2f(-8.83, 1.12);
		glVertex2f(-9.15, 1.28);
		glVertex2f(-9.84, 1.54);
		glVertex2f(-9.74, 1.86);
	glEnd();
		glBegin(GL_LINE_LOOP); //littleFinger Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-9.47, 2.18);
			glVertex2f(-9.15, 2.02);
			glVertex2f(-8.83, 1.86);
			glVertex2f(-8.51, 1.65);
			glVertex2f(-8.51, 1.33);
			glVertex2f(-8.83, 1.12);
			glVertex2f(-9.15, 1.28);
			glVertex2f(-9.84, 1.54);
			glVertex2f(-9.74, 1.86);
		glEnd();
	glColor3f(0.000, 0.749, 1.000); // Ark
	MyCircle2f(-10.59, 2.34, 0.6);
		glColor3f(0.878, 1.000, 1.000);
		MyCircle2f(-10.59, 2.34, 0.5);
	glBegin(GL_POLYGON); //Details 3
		glColor3f(0.545, 0, 0);
		glVertex2f(-13.99, 2.55);
		glVertex2f(-14.42, 2.39);
		glVertex2f(-14.79, 2.13);
		glVertex2f(-15.06, 1.70);
		glVertex2f(-15.11, 1.38);
		glVertex2f(-15.06, 1.01);
		glVertex2f(-15.00, 0.64);
		glVertex2f(-14.68, 0.48);
		glVertex2f(-14.42, 0.32);
		glVertex2f(-13.89, 0.27);
		glVertex2f(-13.57, 0.59);
		glVertex2f(-13.83, 0.80);
		glVertex2f(-14.21, 1.44);
		glVertex2f(-14.21, 1.86);
		glVertex2f(-14.05, 2.29);
	glEnd();
		glBegin(GL_LINE_LOOP); //Details 3 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-13.99, 2.55);
			glVertex2f(-14.42, 2.39);
			glVertex2f(-14.79, 2.13);
			glVertex2f(-15.06, 1.70);
			glVertex2f(-15.11, 1.38);
			glVertex2f(-15.06, 1.01);
			glVertex2f(-15.00, 0.64);
			glVertex2f(-14.68, 0.48);
			glVertex2f(-14.42, 0.32);
			glVertex2f(-13.89, 0.27);
			glVertex2f(-13.57, 0.59);
			glVertex2f(-13.83, 0.80);
			glVertex2f(-14.21, 1.44);
			glVertex2f(-14.21, 1.86);
			glVertex2f(-14.05, 2.29);
		glEnd();
	glBegin(GL_LINE_STRIP); //Details 1
		glColor3f(0, 0, 0);
		glVertex2f(-14.09, 2.02);
		glVertex2f(-13.35, 2.13);
		glVertex2f(-12.66, 2.02);
		glVertex2f(-12.40, 2.65);
	glEnd();
	glBegin(GL_POLYGON); //Details 2
	glColor3f(0.655, 0, 0);
		glVertex2f(-15.64, 2.29);
		glVertex2f(-15.00, 2.13);
		glVertex2f(-15.18, 1.76);
		glVertex2f(-15.18, 1.38);
		glVertex2f(-15.18, 0.80);
		glVertex2f(-16.00, 1.10);
		glVertex2f(-15.70, 1.76);
	glEnd();
		glBegin(GL_LINE_LOOP); //Details 2 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-15.64, 2.29);
			glVertex2f(-15.00, 2.13);
			glVertex2f(-15.18, 1.76);
			glVertex2f(-15.18, 1.38);
			glVertex2f(-15.18, 0.80);
			glVertex2f(-16.00, 1.10);
			glVertex2f(-15.70, 1.76);
		glEnd();
	glBegin(GL_POLYGON); //Details 4
		glColor3f(0.455, 0, 0);
		glVertex2f(-15.22, 0.96);
		glVertex2f(-14.95, 1.06);
		glVertex2f(-14.63, 1.12);
		glVertex2f(-14.26, 1.01);
		glVertex2f(-13.94, 0.85);
		glVertex2f(-13.62, 0.59);
		glVertex2f(-13.89, 0.17);
		glVertex2f(-14.21, 0.15);
		glVertex2f(-14.52, 0.10);
		glVertex2f(-14.79, 0.20);
		glVertex2f(-15.00, 0.42);
	glEnd();
		glBegin(GL_LINE_LOOP); //Details 4 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-15.22, 0.96);
			glVertex2f(-14.95, 1.06);
			glVertex2f(-14.63, 1.12);
			glVertex2f(-14.26, 1.01);
			glVertex2f(-13.94, 0.85);
			glVertex2f(-13.62, 0.59);
			glVertex2f(-13.89, 0.17);
			glVertex2f(-14.21, 0.15);
			glVertex2f(-14.52, 0.10);
			glVertex2f(-14.79, 0.20);
			glVertex2f(-15.00, 0.42);
		glEnd();
}

void leftArm()
{
	glBegin(GL_POLYGON); //Brachium
		glColor3f(1.000, 0.750, 0.000);
		glVertex2f(-22.24, 2.34);
		glVertex2f(-22.61, 2.18);
		glVertex2f(-23.09, 2.13);
		glVertex2f(-23.52, 2.13);
		glVertex2f(-23.94, 2.07);
		glVertex2f(-24.42, 2.02);
		glVertex2f(-26.12, 2.23);
		glVertex2f(-25.75, 2.45);
		glVertex2f(-25.38, 2.61);
		glVertex2f(-25.11, 2.87);
		glVertex2f(-24.85, 3.14);
		glVertex2f(-24.63, 3.41);
		glVertex2f(-24.58, 3.72);
		glVertex2f(-24.63, 4.20);
		glVertex2f(-24.26, 4.36);
		glVertex2f(-23.89, 4.36);
		glVertex2f(-23.52, 4.36);
		glVertex2f(-23.09, 4.36);
		glVertex2f(-22.67, 4.20);
		glVertex2f(-22.14, 4.02);
		glVertex2f(-21.97, 3.78);
		glVertex2f(-21.87, 3.35);
		glVertex2f(-21.92, 2.87);
	glEnd();
		glBegin(GL_LINE_LOOP); //Brachium Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-22.24, 2.34);
			glVertex2f(-22.61, 2.18);
			glVertex2f(-23.09, 2.13);
			glVertex2f(-23.52, 2.13);
			glVertex2f(-23.94, 2.07);
			glVertex2f(-24.42, 2.02);
			glVertex2f(-26.12, 2.23);
			glVertex2f(-25.75, 2.45);
			glVertex2f(-25.38, 2.61);
			glVertex2f(-25.11, 2.87);
			glVertex2f(-24.85, 3.14);
			glVertex2f(-24.63, 3.41);
			glVertex2f(-24.58, 3.72);
			glVertex2f(-24.63, 4.20);
			glVertex2f(-24.26, 4.36);
			glVertex2f(-23.89, 4.36);
			glVertex2f(-23.52, 4.36);
			glVertex2f(-23.09, 4.36);
			glVertex2f(-22.67, 4.20);
			glVertex2f(-22.14, 4.02);
			glVertex2f(-21.97, 3.78);
			glVertex2f(-21.87, 3.35);
			glVertex2f(-21.92, 2.87);
		glEnd();
	glBegin(GL_POLYGON); //Forearm
		glColor3f(0.545, 0.00, 0.000);
		glVertex2f(-24.74, 4.58);
		glVertex2f(-24.79, 5.16);
		glVertex2f(-25.22, 5.43);
		glVertex2f(-26.60, 5.48);
		glVertex2f(-26.71, 5.11);
		glVertex2f(-26.92, 4.74);
		glVertex2f(-27.13, 3.99);
		glVertex2f(-27.19, 3.46);
		glVertex2f(-27.29, 2.93);
		glVertex2f(-27.35, 2.18);
		glVertex2f(-27.03, 1.86);
		glVertex2f(-26.39, 1.54);
		glVertex2f(-26.23, 1.97);
		glVertex2f(-26.12, 2.23);
		glVertex2f(-25.75, 2.45);
		glVertex2f(-25.38, 2.61);
		glVertex2f(-24.85, 3.14);
		glVertex2f(-24.63, 3.41);
		glVertex2f(-24.58, 3.72);
		glVertex2f(-24.63, 4.20);
	glEnd();
		glBegin(GL_LINE_LOOP); //Forearm Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-24.74, 4.58);
			glVertex2f(-24.79, 5.16);
			glVertex2f(-25.22, 5.43);
			glVertex2f(-26.60, 5.48);
			glVertex2f(-26.71, 5.11);
			glVertex2f(-26.92, 4.74);
			glVertex2f(-27.13, 3.99);
			glVertex2f(-27.19, 3.46);
			glVertex2f(-27.29, 2.93);
			glVertex2f(-27.35, 2.18);
			glVertex2f(-27.03, 1.86);
			glVertex2f(-26.39, 1.54);
			glVertex2f(-26.23, 1.97);
			glVertex2f(-26.12, 2.23);
			glVertex2f(-25.75, 2.45);
			glVertex2f(-25.38, 2.61);
			glVertex2f(-24.85, 3.14);
			glVertex2f(-24.63, 3.41);
			glVertex2f(-24.58, 3.72);
			glVertex2f(-24.63, 4.20);
		glEnd();
	glBegin(GL_POLYGON); //Elbow
		glColor3f(0.745, 0.00, 0.000);
		glVertex2f(-24.42, 2.02);
		glVertex2f(-24.74, 2.34);
		glVertex2f(-25.17, 2.39);
		glVertex2f(-25.75, 2.45);
		glVertex2f(-26.12, 2.23);
		glVertex2f(-26.23, 1.82);
		glVertex2f(-25.91, 1.65);
		glVertex2f(-25.49, 1.60);
		glVertex2f(-25.11, 1.60);
		glVertex2f(-24.63, 1.55);
	glEnd();
		glBegin(GL_LINE_LOOP); //Elbow Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-24.42, 2.02);
			glVertex2f(-24.74, 2.34);
			glVertex2f(-25.17, 2.39);
			glVertex2f(-25.75, 2.45);
			glVertex2f(-26.12, 2.23);
			glVertex2f(-26.23, 1.82);
			glVertex2f(-25.91, 1.65);
			glVertex2f(-25.49, 1.60);
			glVertex2f(-25.11, 1.60);
			glVertex2f(-24.63, 1.55);
		glEnd();
	glBegin(GL_POLYGON); //foreFinger
		glColor3f(0.545, 0.00, 0.000);
		glVertex2f(-25.11, 8.09);
		glVertex2f(-24.53, 8.09);
		glVertex2f(-24.21, 7.93);
		glVertex2f(-24.05, 7.45);
		glVertex2f(-24.63, 7.45);
		glVertex2f(-24.85, 7.77);
	glEnd();
		glBegin(GL_LINE_LOOP); //foreFinger Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-25.11, 8.09);
			glVertex2f(-24.53, 8.09);
			glVertex2f(-24.21, 7.93);
			glVertex2f(-24.05, 7.45);
			glVertex2f(-24.63, 7.45);
			glVertex2f(-24.85, 7.77);
		glEnd();
	glBegin(GL_POLYGON); //midFinger
		glColor3f(0.545, 0.00, 0.000);
		glVertex2f(-24.63, 7.45);
		glVertex2f(-24.05, 7.45);
		glVertex2f(-23.68, 7.18);
		glVertex2f(-23.62, 6.70);
		glVertex2f(-24.42, 6.86);
		glVertex2f(-24.42, 7.18);
	glEnd();
		glBegin(GL_LINE_LOOP); //midFinge Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-24.63, 7.45);
			glVertex2f(-24.05, 7.45);
			glVertex2f(-23.68, 7.18);
			glVertex2f(-23.62, 6.70);
			glVertex2f(-24.42, 6.86);
			glVertex2f(-24.42, 7.18);
		glEnd();
	glBegin(GL_POLYGON); //littleFinger
		glColor3f(0.545, 0.00, 0.000);
		glVertex2f(-24.42, 6.86);
		glVertex2f(-24.00, 6.81);
		glVertex2f(-23.57, 6.64);//
		glVertex2f(-23.46, 6.07);
		glVertex2f(-23.62, 5.69);
		glVertex2f(-24.16, 5.64);
		glVertex2f(-24.10, 5.96);
		glVertex2f(-24.10, 6.44);
	glEnd();
		glBegin(GL_LINE_LOOP); //littleFinger Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-24.42, 6.86);
			glVertex2f(-24.00, 6.81);
			glVertex2f(-23.57, 6.64);//
			glVertex2f(-23.46, 6.07);
			glVertex2f(-23.62, 5.69);
			glVertex2f(-24.16, 5.64);
			glVertex2f(-24.10, 5.96);
			glVertex2f(-24.10, 6.44);
		glEnd();
	glBegin(GL_POLYGON); //Hand
		glColor3f(0.545, 0.00, 0.000);
		glVertex2f(-25.75, 7.66);
		glVertex2f(-25.43, 8.09);
		glVertex2f(-25.11, 8.09);
		glVertex2f(-24.85, 7.77);
		glVertex2f(-24.63, 7.45);
		glVertex2f(-24.42, 7.18);
		glVertex2f(-24.42, 6.86);
		glVertex2f(-24.10, 5.96);
		glVertex2f(-24.16, 5.64);
		glVertex2f(-24.79, 5.16);
		glVertex2f(-25.22, 5.43);
		glVertex2f(-25.01, 5.80);
		glVertex2f(-24.69, 6.22);
		glVertex2f(-24.74, 6.65);
		glVertex2f(-24.95, 7.13);
		glVertex2f(-25.38, 7.56);
		glVertex2f(-26.02, 7.56);
	glEnd();
		glBegin(GL_LINE_LOOP); //Hand Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-25.75, 7.66);
			glVertex2f(-25.43, 8.09);
			glVertex2f(-25.11, 8.09);
			glVertex2f(-24.85, 7.77);
			glVertex2f(-24.63, 7.45);
			glVertex2f(-24.42, 7.18);
			glVertex2f(-24.42, 6.86);
			glVertex2f(-24.10, 5.96);
			glVertex2f(-24.16, 5.64);
			glVertex2f(-24.79, 5.16);
			glVertex2f(-25.22, 5.43);
			glVertex2f(-25.01, 5.80);
			glVertex2f(-24.69, 6.22);
			glVertex2f(-24.74, 6.65);
			glVertex2f(-24.95, 7.13);
			glVertex2f(-25.38, 7.56);
			glVertex2f(-26.02, 7.56);
		glEnd();
	glBegin(GL_POLYGON); //Punch
		glColor3f(0.655, 0.00, 0.000);
		glVertex2f(-26.60, 5.48);
		glVertex2f(-26.60, 5.80);
		glVertex2f(-26.55, 6.28);
		glVertex2f(-26.50, 6.76);
		glVertex2f(-26.39, 7.29);
		glVertex2f(-26.02, 7.56);
		glVertex2f(-25.38, 7.56);
		glVertex2f(-24.95, 7.13);
		glVertex2f(-24.74, 6.55);
		glVertex2f(-24.69, 6.22);
		glVertex2f(-25.01, 5.80);
		glVertex2f(-25.22, 5.43);
		glVertex2f(-25.75, 5.05);
		glVertex2f(-26.23, 5.11);
	glEnd();
		glBegin(GL_LINE_LOOP); //Punch Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-26.60, 5.48);
			glVertex2f(-26.60, 5.80);
			glVertex2f(-26.55, 6.28);
			glVertex2f(-26.50, 6.76);
			glVertex2f(-26.39, 7.29);
			glVertex2f(-26.02, 7.56);
			glVertex2f(-25.38, 7.56);
			glVertex2f(-24.95, 7.13);
			glVertex2f(-24.74, 6.55);
			glVertex2f(-24.69, 6.22);
			glVertex2f(-25.01, 5.80);
			glVertex2f(-25.22, 5.43);
			glVertex2f(-25.75, 5.05);
			glVertex2f(-26.23, 5.11);
		glEnd();
	glBegin(GL_POLYGON); //Details 1
		glColor3f(0.455, 0.00, 0.000);
		glVertex2f(-27.13, 3.99);
		glVertex2f(-26.71, 3.72);
		glVertex2f(-26.39, 3.46);
		glVertex2f(-26.44, 2.87);
		glVertex2f(-26.55, 2.18);
		glVertex2f(-26.71, 1.70);
		glVertex2f(-27.03, 1.86);
		glVertex2f(-27.35, 2.18);
		glVertex2f(-27.29, 2.93);
		glVertex2f(-27.19, 3.46);
	glEnd();
		glBegin(GL_LINE_LOOP); //Details 1 Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-27.13, 3.99);
			glVertex2f(-26.71, 3.72);
			glVertex2f(-26.39, 3.46);
			glVertex2f(-26.44, 2.87);
			glVertex2f(-26.55, 2.18);
			glVertex2f(-26.71, 1.70);
			glVertex2f(-27.03, 1.86);
			glVertex2f(-27.35, 2.18);
			glVertex2f(-27.29, 2.93);
			glVertex2f(-27.19, 3.46);
		glEnd();
	glBegin(GL_POLYGON); //Details 2
		glColor3f(0.455, 0.00, 0.000);
		glVertex2f(-23.94, 2.07);
		glVertex2f(-23.52, 2.13);
		glVertex2f(-23.09, 2.13);
		glVertex2f(-22.61, 2.18);
		glVertex2f(-22.24, 2.34);
		glVertex2f(-21.92, 2.87);
		glVertex2f(-21.87, 3.35);
		glVertex2f(-21.97, 3.78);
		glVertex2f(-22.24, 3.99);
		glVertex2f(-22.67, 4.20);
		glVertex2f(-23.09, 4.36);
		glVertex2f(-22.82, 3.99);
		glVertex2f(-22.51, 3.62);
		glVertex2f(-22.40, 3.19);
		glVertex2f(-22.88, 2.93);
		glVertex2f(-23.25, 2.77);
		glVertex2f(-23.73, 2.66);
		glVertex2f(-24.74, 2.34);
		glVertex2f(-24.42, 2.02);
	glEnd();
		glBegin(GL_LINE_LOOP); //Details 2 Border
			glColor3f(0, 0.00, 0.000);
			glVertex2f(-23.94, 2.07);
			glVertex2f(-23.52, 2.13);
			glVertex2f(-23.09, 2.13);
			glVertex2f(-22.61, 2.18);
			glVertex2f(-22.24, 2.34);
			glVertex2f(-21.92, 2.87);
			glVertex2f(-21.87, 3.35);
			glVertex2f(-21.97, 3.78);
			glVertex2f(-22.24, 3.99);
			glVertex2f(-22.67, 4.20);
			glVertex2f(-23.09, 4.36);
			glVertex2f(-23.73, 2.66);
			glVertex2f(-24.74, 2.34);
			glVertex2f(-24.42, 2.02);
		glEnd();
}

void leftlegDown(){
	glBegin(GL_POLYGON); //Calf 1
		glColor3f(0.655, 0, 0);
		glVertex2f(-22.20, -9.00);
		glVertex2f(-22.72, -8.73);
		glVertex2f(-23.10, -7.93);
		glVertex2f(-23.26, -8.30);
		glVertex2f(-23.42, -8.73);
		glVertex2f(-23.42, -9.15);
		glVertex2f(-23.48, -9.47);
		glVertex2f(-23.53, -10.00);
		glVertex2f(-23.64, -10.75);
		glVertex2f(-23.62, -11.44);
		glVertex2f(-23.41, -12.18);
		glVertex2f(-23.20, -10.11);
	glEnd();
		glBegin(GL_LINE_LOOP); //Calf 1 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-22.20, -9.00);
			glVertex2f(-22.72, -8.73);
			glVertex2f(-23.10, -7.93);
			glVertex2f(-23.26, -8.30);
			glVertex2f(-23.42, -8.73);
			glVertex2f(-23.42, -9.15);
			glVertex2f(-23.48, -9.47);
			glVertex2f(-23.53, -10.00);
			glVertex2f(-23.64, -10.75);
			glVertex2f(-23.62, -11.44);
			glVertex2f(-23.41, -12.18);
			glVertex2f(-23.20, -10.11);
		glEnd();
	glBegin(GL_POLYGON); //Calf 2
		glColor3f(0.655, 0, 0);
		glVertex2f(-23.64, -10.75);
		glVertex2f(-23.80, -11.07);
		glVertex2f(-23.20, -11.44);
		glVertex2f(-23.41, -12.18);
		glVertex2f(-23.89, -12.50);
		glVertex2f(-24.26, -12.24);
		glVertex2f(-24.20, -11.49);//
	glEnd();
		glBegin(GL_LINE_LOOP); //Calf 2 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-23.64, -10.75);
			glVertex2f(-23.80, -11.07);
			glVertex2f(-23.89, -12.50);
			glVertex2f(-24.26, -12.24);
			glVertex2f(-24.20, -11.49);//
		glEnd();
	glBegin(GL_POLYGON); //Knee 1
		glColor3f(0.355, 0, 0);
		glVertex2f(-22.45, -9.10);
		glVertex2f(-22.24, -7.98);
		glVertex2f(-22.88, -7.56);
		glVertex2f(-23.09, -8.09);
	glEnd();
		glBegin(GL_LINE_LOOP); //Knee 1 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-22.45, -9.10);
			glVertex2f(-22.24, -7.98);
			glVertex2f(-22.88, -7.56);
			glVertex2f(-23.09, -8.09);
		glEnd();
	glBegin(GL_POLYGON); //Knee 2
		glColor3f(0.655, 0, 0);
		glVertex2f(-21.81, -8.03);
		glVertex2f(-22.08, -8.67);
		glVertex2f(-22.45, -9.10);
		glVertex2f(-22.24, -9.74);
		glVertex2f(-21.49, -9.90);
		glVertex2f(-21.02, -9.20);
		glVertex2f(-20.80, -8.25);
		glVertex2f(-21.02, -8.03);
	glEnd();
		glBegin(GL_LINE_LOOP); //Knee 2 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-21.81, -8.03);
			glVertex2f(-22.08, -8.67);
			glVertex2f(-22.45, -9.10);
			glVertex2f(-22.24, -9.74);
			glVertex2f(-21.49, -9.90);
			glVertex2f(-21.02, -9.20);
			glVertex2f(-20.80, -8.25);
			glVertex2f(-21.02, -8.03);
		glEnd();
	glBegin(GL_POLYGON); //Knee 2.2
		glColor3f(0.355, 0, 0);
		glVertex2f(-22.24, -9.74);
		glVertex2f(-21.92, -9.20);
		glVertex2f(-21.34, -9.36);
		glVertex2f(-21.49, -9.90);
	glEnd();
		glBegin(GL_LINE_LOOP); //Knee 2.2 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-22.24, -9.74);
			glVertex2f(-21.92, -9.20);
			glVertex2f(-21.34, -9.36);
			glVertex2f(-21.49, -9.90);
		glEnd();
	glBegin(GL_POLYGON); //Shin
		glColor3f(0.555, 0, 0);
		glVertex2f(-21.28, -9.63);
		glVertex2f(-21.18, -10.27);
		glVertex2f(-21.76, -11.49);
		glVertex2f(-22.08, -12.77);
		glVertex2f(-23.41, -12.18);
		glVertex2f(-23.20, -10.11);
		glVertex2f(-22.45, -9.42);
	glEnd();
		glBegin(GL_LINE_LOOP); //Shin Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-21.28, -9.63);
			glVertex2f(-21.18, -10.27);
			glVertex2f(-21.76, -11.49);
			glVertex2f(-22.08, -12.77);
			glVertex2f(-23.41, -12.18);
			glVertex2f(-23.20, -10.11);
			glVertex2f(-22.45, -9.42);
		glEnd();
	glBegin(GL_POLYGON); //Booth 4 
		glColor3f(0.455, 0, 0);
		glVertex2f(-22.00, -15.38);
		glVertex2f(-22.51, -15.38);
		glVertex2f(-23.09, -15.27);
		glVertex2f(-24.10, -14.26);
		glVertex2f(-24.31, -13.73);
		glVertex2f(-24.37, -13.46);
		glVertex2f(-24.37, -13.14);
		glVertex2f(-24.42, -12.56);
		glVertex2f(-24.26, -12.18);
		glVertex2f(-24.63, -13.04);
		glVertex2f(-24.79, -13.57);
		glVertex2f(-24.74, -13.83);
		glVertex2f(-24.63, -14.26);
		glVertex2f(-24.42, -14.63);
		glVertex2f(-24.21, -15.06);
		glVertex2f(-23.89, -15.32);
		glVertex2f(-23.52, -15.59);
		glVertex2f(-23.14, -15.75);
		glVertex2f(-22.72, -15.75);
		glVertex2f(-22.35, -15.75);
	glEnd();
		glBegin(GL_LINE_LOOP); //Booth 4 Border
			glColor3f(0, 0, 0);
			glVertex2f(-22.00, -15.38);
			glVertex2f(-22.51, -15.38);
			glVertex2f(-23.09, -15.27);
			glVertex2f(-24.10, -14.26);
			glVertex2f(-24.31, -13.73);
			glVertex2f(-24.37, -13.46);
			glVertex2f(-24.37, -13.14);
			glVertex2f(-24.42, -12.56);
			glVertex2f(-24.26, -12.18);
			glVertex2f(-24.63, -13.04);
			glVertex2f(-24.79, -13.57);
			glVertex2f(-24.74, -13.83);
			glVertex2f(-24.63, -14.26);
			glVertex2f(-24.42, -14.63);
			glVertex2f(-24.21, -15.06);
			glVertex2f(-23.89, -15.32);
			glVertex2f(-23.52, -15.59);
			glVertex2f(-23.14, -15.75);
			glVertex2f(-22.72, -15.75);
			glVertex2f(-22.35, -15.75);
		glEnd();
	glBegin(GL_POLYGON); //Booth 4.2
		glColor3f(0.455, 0, 0);
		glVertex2f(-24.25, -11.50);
		glVertex2f(-25.11, -12.08);
		glVertex2f(-25.11, -12.50);
		glVertex2f(-24.90, -12.93);
		glVertex2f(-24.63, -13.04);
		glVertex2f(-24.42, -12.56);
		glVertex2f(-24.26, -12.18);
		glVertex2f(-24.42, -12.88);
	glEnd();
		glBegin(GL_LINE_LOOP); //Booth 4.2 Border
			glColor3f(0, 0, 0);
			glVertex2f(-24.25, -11.50);
			glVertex2f(-25.11, -12.08);
			glVertex2f(-25.11, -12.50);
			glVertex2f(-24.90, -12.93);
			glVertex2f(-24.63, -13.04);
			glVertex2f(-24.42, -12.56);
			glVertex2f(-24.26, -12.18);
			glVertex2f(-24.42, -12.88);
		glEnd();
	glBegin(GL_POLYGON); //Booth 3
		glColor3f(0.555, 0, 0);
		glVertex2f(-22.08, -13.35);
		glVertex2f(-21.92, -14.26);
		glVertex2f(-21.87, -14.79);
		glVertex2f(-21.87, -15.22);
		glVertex2f(-22.13, -15.38);
		glVertex2f(-22.51, -15.38);
		glVertex2f(-23.09, -15.27);
		glVertex2f(-24.10, -14.26);
		glVertex2f(-24.31, -13.73);
		glVertex2f(-24.37, -13.46);
		glVertex2f(-24.37, -13.14);
		glVertex2f(-24.42, -12.56);
		glVertex2f(-24.26, -12.18);
	glEnd();
		glBegin(GL_LINE_LOOP); //Booth 3 Border
			glColor3f(0, 0, 0);
			glVertex2f(-22.08, -13.35);
			glVertex2f(-21.92, -14.26);
			glVertex2f(-21.87, -14.79);
			glVertex2f(-21.87, -15.22);
			glVertex2f(-22.13, -15.38);
			glVertex2f(-22.51, -15.38);
			glVertex2f(-23.09, -15.27);
			glVertex2f(-24.10, -14.26);
			glVertex2f(-24.31, -13.73);
			glVertex2f(-24.37, -13.46);
			glVertex2f(-24.37, -13.14);
			glVertex2f(-24.42, -12.56);
			glVertex2f(-24.26, -12.18);
		glEnd();
	glBegin(GL_POLYGON); //Booth 2
		glColor3f(0.655, 0, 0);
		glVertex2f(-23.73, -12.40);
		glVertex2f(-24.10, -12.45);
		glVertex2f(-23.73, -14.21);
		glVertex2f(-22.77, -13.94);
		glVertex2f(-21.92, -14.26);
		glVertex2f(-22.08, -13.35);
		glVertex2f(-22.67, -13.04);
		glVertex2f(-23.46, -13.09);
	glEnd();
		glBegin(GL_LINE_LOOP); //Booth 2 Border
			glColor3f(0, 0, 0);
			glVertex2f(-23.73, -12.40);
			glVertex2f(-24.10, -12.45);
			glVertex2f(-23.73, -14.21);
			glVertex2f(-22.77, -13.94);
			glVertex2f(-21.92, -14.26);
			glVertex2f(-22.08, -13.35);
			glVertex2f(-22.67, -13.04);
			glVertex2f(-23.46, -13.09);
		glEnd();
	glBegin(GL_POLYGON); //Booth
		glColor3f(0.655, 0, 0);
		glVertex2f(-22.19, -12.24);
		glVertex2f(-22.08, -12.77);
		glVertex2f(-22.08, -13.35);
		glVertex2f(-22.67, -13.04);
		glVertex2f(-23.46, -13.09);
		glVertex2f(-23.73, -12.20);
		glVertex2f(-23.41, -12.18);
		glVertex2f(-22.93, -11.92);
	glEnd();
		glBegin(GL_LINE_LOOP); //Booth Border
			glColor3f(0, 0, 0);
			glVertex2f(-22.19, -12.24);
			glVertex2f(-22.08, -12.77);
			glVertex2f(-22.08, -13.35);
			glVertex2f(-22.67, -13.04);
			glVertex2f(-23.46, -13.09);
			glVertex2f(-23.73, -12.20);
			glVertex2f(-23.41, -12.18);
			glVertex2f(-22.93, -11.92);
		glEnd();
}

void leftLeg()
{
	glBegin(GL_POLYGON); //Thigh
		glColor3f(1.000, 0.750, 0.000);
		glVertex2f(-20.86, -3.51);
		glVertex2f(-20.11, -4.04);
		glVertex2f(-19.69, -4.63);
		glVertex2f(-19.79, -5.11);
		glVertex2f(-19.95, -5.59);
		glVertex2f(-20.27, -6.76);
		glVertex2f(-20.48, -7.24);
		glVertex2f(-20.75, -7.71);
		glVertex2f(-21.02, -8.03);
		glVertex2f(-22.24, -7.98);
		glVertex2f(-21.49, -10.00);
		glVertex2f(-22.45, -9.10);
		glVertex2f(-22.88, -7.56);
		glVertex2f(-22.88, -5.85);
		glVertex2f(-22.77, -4.95);
		glVertex2f(-22.24, -5.05);
		glVertex2f(-21.92, -4.89);
		glVertex2f(-21.60, -4.68);
		glVertex2f(-21.34, -4.26);
		glVertex2f(-20.86, -4.20);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh Border
			glColor3f(0.000, 0.00, 0.000);
			glVertex2f(-20.86, -3.51);
			glVertex2f(-20.11, -4.04);
			glVertex2f(-19.69, -4.63);
			glVertex2f(-19.79, -5.11);
			glVertex2f(-19.95, -5.59);
			glVertex2f(-20.27, -6.76);
			glVertex2f(-20.48, -7.24);
			glVertex2f(-20.75, -7.71);
			glVertex2f(-21.02, -8.03);
			glVertex2f(-22.24, -7.98);
			glVertex2f(-21.49, -10.00);
			glVertex2f(-22.45, -9.10);
			glVertex2f(-22.88, -7.56);
			glVertex2f(-22.88, -5.85);
			glVertex2f(-22.77, -4.95);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 5
		glColor3f(0.555, 0.000, 0.000);
		glVertex2f(-21.60, -4.68);
		glVertex2f(-21.81, -5.32);
		glVertex2f(-22.03, -5.91);
		glVertex2f(-22.08, -6.54);
		glVertex2f(-22.19, -7.24);
		glVertex2f(-22.24, -7.98);
		glVertex2f(-22.88, -7.56);
		glVertex2f(-22.93, -6.65);
		glVertex2f(-22.88, -5.85);
		glVertex2f(-22.77, -4.80);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 5 Border
			glColor3f(0, 0.000, 0.000);
			glVertex2f(-21.60, -4.68);
			glVertex2f(-22.24, -7.98);
			glVertex2f(-22.88, -7.56);
			glVertex2f(-22.93, -6.65);
			glVertex2f(-22.88, -5.85);
			glVertex2f(-22.77, -4.80);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 3.1
		glColor3f(0.655, 0.000, 0.000);
		glVertex2f(-22.03,	-2.50);
		glVertex2f(-22.35, -2.55);
		glVertex2f(-22.61, -2.82);
		glVertex2f(-22.88, -3.03);
		glVertex2f(-23.04, -3.35);
		glVertex2f(-22.98, -3.94);
		glVertex2f(-22.82, -3.62);
		glVertex2f(-22.67, -3.35);
		glVertex2f(-22.40, -3.29);
		glVertex2f(-22.03, -3.09);
	glEnd();
		glBegin(GL_LINE_STRIP); //Thigh 3.1 Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-22.03, -2.50);
			glVertex2f(-22.35, -2.55);
			glVertex2f(-22.61, -2.82);
			glVertex2f(-22.88, -3.03);
			glVertex2f(-23.04, -3.35);
			glVertex2f(-22.98, -3.94);
			glVertex2f(-22.82, -3.62);
			glVertex2f(-22.67, -3.35);
			glVertex2f(-22.40, -3.29);
			glVertex2f(-22.03, -3.09);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 3.2
		glColor3f(0.655, 0.000, 0.000);
		glVertex2f(-22.03, -2.50);
		glVertex2f(-21.71, -2.55);
		glVertex2f(-21.39, -2.77);
		glVertex2f(-21.12, -3.03);
		glVertex2f(-20.86, -3.51);
		glVertex2f(-20.80, -3.83);
		glVertex2f(-20.86, -4.20);
		glVertex2f(-21.34, -4.26);
		glVertex2f(-21.28, -3.88);
		glVertex2f(-21.44, -3.51);
		glVertex2f(-21.65, -3.19);
		glVertex2f(-22.03, -3.09);
	glEnd();
		glBegin(GL_LINE_STRIP); //Thigh 3.2
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-22.03, -2.50);
			glVertex2f(-21.71, -2.55);
			glVertex2f(-21.39, -2.77);
			glVertex2f(-21.12, -3.03);
			glVertex2f(-20.86, -3.51);
			glVertex2f(-20.80, -3.83);
			glVertex2f(-20.86, -4.20);
			glVertex2f(-21.34, -4.26);
			glVertex2f(-21.28, -3.88);
			glVertex2f(-21.44, -3.51);
			glVertex2f(-21.65, -3.19);
			glVertex2f(-22.03, -3.09);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 2
		glColor3f(0.345, 0.000, 0.000);
		glVertex2f(-22.51, -4.95);
		glVertex2f(-22.24, -5.05);
		glVertex2f(-21.92, -4.89);
		glVertex2f(-21.60, -4.68);
		glVertex2f(-21.34, -4.26);
		glVertex2f(-21.28, -3.88);
		glVertex2f(-21.44, -3.51);
		glVertex2f(-21.65, -3.19);
		glVertex2f(-22.03, -3.09);
		glVertex2f(-22.67, -3.35);
		glVertex2f(-22.98, -3.94);
		glVertex2f(-22.98, -4.26);
		glVertex2f(-22.88, -4.63);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 2 Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-22.51, -4.95);
			glVertex2f(-22.24, -5.05);
			glVertex2f(-21.92, -4.89);
			glVertex2f(-21.60, -4.68);
			glVertex2f(-21.34, -4.26);
			glVertex2f(-21.28, -3.88);
			glVertex2f(-21.44, -3.51);
			glVertex2f(-21.65, -3.19);
			glVertex2f(-22.03, -3.09);
			glVertex2f(-22.67, -3.35);
			glVertex2f(-22.98, -3.94);
			glVertex2f(-22.98, -4.26);
			glVertex2f(-22.88, -4.63);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 4
		glColor3f(0.455, 0.000, 0.000);
		glVertex2f(-20.86, -3.51);
		glVertex2f(-20.11, -4.04);
		glVertex2f(-19.69, -4.53);
		glVertex2f(-19.79, -5.11);
		glVertex2f(-20.22, -4.68);
		glVertex2f(-20.54, -4.42);
		glVertex2f(-20.86, -4.20);
		glVertex2f(-20.80, -3.83);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 4 Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-20.86, -3.51);
			glVertex2f(-20.11, -4.04);
			glVertex2f(-19.69, -4.53);
			glVertex2f(-19.79, -5.11);
			glVertex2f(-20.22, -4.68);
			glVertex2f(-20.54, -4.42);
			glVertex2f(-20.86, -4.20);
			glVertex2f(-20.80, -3.83);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 6
		glColor3f(0.827, 0.827, 0.827);
		glVertex2f(-21.23, -4.79);
		glVertex2f(-20.43, -5.43);
		glVertex2f(-20.15, -6.17);
		glVertex2f(-20.27, -6.76);
		glVertex2f(-20.48, -7.24);
		glVertex2f(-20.75, -7.71);
		glVertex2f(-21.07, -7.40);
		glVertex2f(-21.76, -6.97);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 6 Border
			glColor3f(0, 0 ,0);
			glVertex2f(-21.23, -4.79);
			glVertex2f(-20.43, -5.43);
			glVertex2f(-20.15, -6.17);
			glVertex2f(-20.27, -6.76);
			glVertex2f(-20.48, -7.24);
			glVertex2f(-20.75, -7.71);
			glVertex2f(-21.07, -7.40);
			glVertex2f(-21.76, -6.97);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 6.2
		glColor3f(0.412, 0.412, 0.412);
		glVertex2f(-20.80, -6.81);
		glVertex2f(-21.12, -6.70);
		glVertex2f(-20.70, -5.27);
		glVertex2f(-20.43, -5.43);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 6.2 Border
			glColor3f(0,0,0);
			glVertex2f(-20.80, -6.81);
			glVertex2f(-21.12, -6.70);
			glVertex2f(-20.70, -5.27);
			glVertex2f(-20.43, -5.43);
		glEnd();
}

void rightLegDown()
{
	glBegin(GL_POLYGON); //Shin 2
		glColor3f(0.655, 0, 0);
		glVertex2f(-17.66, -8.25);
		glVertex2f(-17.93, -9.04);
		glVertex2f(-18.04, -9.36);
		glVertex2f(-18.30, -9.74);
		glVertex2f(-18.67, -10.16);
		glVertex2f(-16.92, -10.11);
		glVertex2f(-16.08, -9.04);
	glEnd();
	glBegin(GL_POLYGON); //Shin
		glColor3f(0.655, 0, 0);
		glVertex2f(-16.28, -9.04);
		glVertex2f(-15.86, -8.89);
		glVertex2f(-15.48, -8.61);
		glVertex2f(-16.44, -6.93);
		glVertex2f(-17.03, -7.93);
		glVertex2f(-17.40, -8.03);
		glVertex2f(-17.66, -8.25);
	glEnd();
	glBegin(GL_POLYGON); //Knee
		glColor3f(0.655, 0, 0);
		glVertex2f(-16.33, -7.66);
		glVertex2f(-15.96, -7.34);
		glVertex2f(-15.54, -6.81);
		glVertex2f(-14.74, -6.81);
		glVertex2f(-14.74, -7.34);
		glVertex2f(-15.06, -7.98);
		glVertex2f(-15.59, -8.57);
		glVertex2f(-16.23, -8.41);
	glEnd();
		glBegin(GL_LINE_LOOP); //Knee Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-16.33, -7.66);
			glVertex2f(-15.96, -7.34);
			glVertex2f(-15.54, -6.81);
			glVertex2f(-14.74, -6.81);
			glVertex2f(-14.74, -7.34);
			glVertex2f(-15.06, -7.98);
			glVertex2f(-15.59, -8.57);
			glVertex2f(-16.23, -8.41);
		glEnd();
	glBegin(GL_POLYGON); //Knee 2
	glColor3f(0.455, 0, 0);
		glVertex2f(-15.32, -7.98);
		glVertex2f(-15.59, -8.57);
		glVertex2f(-16.23, -8.41);
		glVertex2f(-16.28, -8.14);
		glVertex2f(-15.86, -7.87);
	glEnd();
		glBegin(GL_LINE_LOOP); //Knee 2 Border
			glColor3f(0, 0, 0);
			glVertex2f(-15.32, -7.98);
			glVertex2f(-15.59, -8.57);
			glVertex2f(-16.23, -8.41);
			glVertex2f(-16.28, -8.14);
			glVertex2f(-15.86, -7.87);
		glEnd();
	glBegin(GL_POLYGON); //Calf 3
		glColor3f(0.355, 0, 0);
		glVertex2f(-18.62, -8.73);
		glVertex2f(-18.83, -8.99);
		glVertex2f(-19.15, -9.15);
		glVertex2f(-19.47, -9.31);
		glVertex2f(-19.15, -9.79);
		glVertex2f(-18.67, -10.16);
		glVertex2f(-18.30, -9.74);
		glVertex2f(-18.04, -9.36);
		glVertex2f(-17.93, -9.04);
	glEnd();
		glBegin(GL_LINE_LOOP); //Calf 3 Border
			glColor3f(0.0, 0, 0);
			glVertex2f(-18.62, -8.73);
			glVertex2f(-18.83, -8.99);
			glVertex2f(-19.15, -9.15);
			glVertex2f(-19.47, -9.31);
			glVertex2f(-19.15, -9.79);
			glVertex2f(-18.67, -10.16);
			glVertex2f(-18.30, -9.74);
			glVertex2f(-18.04, -9.36);
			glVertex2f(-17.93, -9.04);
		glEnd();
	glBegin(GL_POLYGON); //Calf2
		glColor3f(0.355, 0, 0);
		glVertex2f(-18.25, -7.93);
		glVertex2f(-18.41, -8.30);
		glVertex2f(-18.62, -8.73);
		glVertex2f(-17.93, -9.04);
		glVertex2f(-17.66, -8.25);
	glEnd();
		glBegin(GL_LINE_LOOP); //Calf2 Border
			glColor3f(0, 0, 0);
			glVertex2f(-18.25, -7.93);
			glVertex2f(-18.41, -8.30);
			glVertex2f(-18.62, -8.73);
			glVertex2f(-17.93, -9.04);
			glVertex2f(-17.66, -8.25);
		glEnd();
	glBegin(GL_POLYGON); //Calf
		glColor3f(0.355, 0, 0);
		glVertex2f(-17.19, -6.44);
		glVertex2f(-17.40, -6.60);
		glVertex2f(-17.66, -6.86);
		glVertex2f(-17.88, -7.18);
		glVertex2f(-18.09, -7.56);
		glVertex2f(-18.25, -7.93);
		glVertex2f(-17.66, -8.25);
		glVertex2f(-17.40, -8.03);
		glVertex2f(-16.30, -7.63);
		glVertex2f(-16.49, -7.66);
		glVertex2f(-16.65, -7.18);
		glVertex2f(-16.87, -6.76);
	glEnd();
		glBegin(GL_LINE_STRIP); //Calf Border
			glColor3f(0, 0, 0);
			glVertex2f(-17.19, -6.44);
			glVertex2f(-17.40, -6.60);
			glVertex2f(-17.66, -6.86);
			glVertex2f(-17.88, -7.18);
			glVertex2f(-18.09, -7.56);
			glVertex2f(-18.25, -7.93);
			glVertex2f(-17.66, -8.25);
			glVertex2f(-17.40, -8.03);
			//glVertex2f(-16.30, -7.63);
			glVertex2f(-16.49, -7.66);
			glVertex2f(-16.65, -7.18);
			glVertex2f(-16.87, -6.76);
		glEnd();
	glBegin(GL_POLYGON); //Boots 6
		glColor3f(0.600, 0, 0);
		glVertex2f(-19.15, -10.75);
		glVertex2f(-19.15, -11.12);
		glVertex2f(-19.15, -11.49);
		glVertex2f(-19.05, -11.76);
		glVertex2f(-18.89, -12.08);
		glVertex2f(-18.67, -12.29);
		glVertex2f(-18.41, -12.50);
		glVertex2f(-18.14, -12.72);
		glVertex2f(-17.77, -12.82);
		glVertex2f(-17.45, -12.93);
		glVertex2f(-17.13, -12.93);
		glVertex2f(-16.87, -12.93);
		glVertex2f(-16.44, -12.50);
		glVertex2f(-16.23, -12.13);
		glVertex2f(-16.44, -11.65);
	glEnd();
		glBegin(GL_LINE_LOOP); //Boots 6 Border
			glColor3f(0, 0, 0);
			glVertex2f(-19.15, -10.75);
			glVertex2f(-19.15, -11.12);
			glVertex2f(-19.15, -11.49);
			glVertex2f(-19.05, -11.76);
			glVertex2f(-18.89, -12.08);
			glVertex2f(-18.67, -12.29);
			glVertex2f(-18.41, -12.50);
			glVertex2f(-18.14, -12.72);
			glVertex2f(-17.77, -12.82);
			glVertex2f(-17.45, -12.93);
			glVertex2f(-17.13, -12.93);
			glVertex2f(-16.87, -12.93);
			glVertex2f(-16.44, -12.50);
			glVertex2f(-16.23, -12.13);
			glVertex2f(-16.44, -11.65);
		glEnd();
	glBegin(GL_POLYGON); //Boots 5
		glColor3f(0.255, 0, 0);
		glVertex2f(-19.63, -9.79);
		glVertex2f(-19.85, -10.00);
		glVertex2f(-19.47, -10.75);
		glVertex2f(-19.05, -10.80);
		glVertex2f(-19.15, -10.33);
	glEnd();
		glBegin(GL_LINE_LOOP); //Boots 5 Border
			glColor3f(0, 0, 0);
			glVertex2f(-19.63, -9.79);
			glVertex2f(-19.85, -10.00);
			glVertex2f(-19.47, -10.75);
			glVertex2f(-19.05, -10.80);
			glVertex2f(-19.15, -10.33);
		glEnd();
	glBegin(GL_POLYGON); //Boots 4
		glColor3f(0.355, 0, 0);
		glVertex2f(-19.47, -9.40);
		glVertex2f(-19.63, -9.79);
		glVertex2f(-19.15, -10.43);
		glVertex2f(-19.05, -9.90);
	glEnd();
		glBegin(GL_LINE_LOOP); //Boots 4 Border
			glColor3f(0, 0, 0);
			glVertex2f(-19.47, -9.40);
			glVertex2f(-19.63, -9.79);
			glVertex2f(-19.15, -10.43);
			glVertex2f(-19.05, -9.90);
		glEnd();
	glBegin(GL_POLYGON); //Boots 3
		glColor3f(0.600, 0, 0);
		glVertex2f(-19.05, -9.90);
		glVertex2f(-19.10, -10.43);
		glVertex2f(-19.05, -10.75);
		glVertex2f(-18.89, -11.07);
		glVertex2f(-18.73, -11.33);
		glVertex2f(-18.52, -11.65);
		glVertex2f(-18.30, -11.97);
		glVertex2f(-18.14, -12.18);
		glVertex2f(-17.82, -12.34);
		glVertex2f(-17.56, -12.45);
		glVertex2f(-16.87, -12.50);
		glVertex2f(-16.44, -12.50);
		glVertex2f(-16.23, -12.13);
		glVertex2f(-16.34, -11.65);
		glVertex2f(-16.49, -11.33);
	glEnd();
		glBegin(GL_LINE_LOOP); //Boots 3 Border
			glColor3f(0, 0, 0);
			glVertex2f(-19.05, -9.90);
			glVertex2f(-19.10, -10.43);
			glVertex2f(-19.05, -10.75);
			glVertex2f(-18.89, -11.07);
			glVertex2f(-18.73, -11.33);
			glVertex2f(-18.52, -11.65);
			glVertex2f(-18.30, -11.97);
			glVertex2f(-18.14, -12.18);
			glVertex2f(-17.82, -12.34);
			glVertex2f(-17.56, -12.45);
			glVertex2f(-16.87, -12.50);
			glVertex2f(-16.44, -12.50);
			glVertex2f(-16.23, -12.13);
			glVertex2f(-16.34, -11.65);
			glVertex2f(-16.49, -11.33);
		glEnd();
	glBegin(GL_POLYGON); //Boots 2
		glColor3f(0.555, 0, 0);
		glVertex2f(-18.94, -10.06);
		glVertex2f(-18.20, -11.65);
		glVertex2f(-17.40, -11.33);
		glVertex2f(-16.49, -11.33);
		glVertex2f(-16.92, -10.69);
		glVertex2f(-18.14, -10.64);
		glVertex2f(-18.52, -10.06);
	glEnd();
		glBegin(GL_LINE_LOOP); //Boots 2 Border
			glColor3f(0, 0, 0);
			glVertex2f(-18.94, -10.06);
			glVertex2f(-18.20, -11.65);
			glVertex2f(-17.40, -11.33);
			glVertex2f(-16.49, -11.33);
			glVertex2f(-16.92, -10.69);
			glVertex2f(-18.14, -10.64);
			glVertex2f(-18.52, -10.06);
		glEnd();
	glBegin(GL_POLYGON); //Boots
		glColor3f(0.455, 0, 0);
		glVertex2f(-17.98, -9.47);
		glVertex2f(-18.62, -10.06);
		glVertex2f(-18.14, -10.64);
		glVertex2f(-16.92, -10.69);
		glVertex2f(-16.97, -10.06);
		glVertex2f(-17.19, -9.58);
	glEnd();
		glBegin(GL_LINE_LOOP); //Boots Border
			glColor3f(0, 0, 0);
			glVertex2f(-17.98, -9.47);
			glVertex2f(-18.62, -10.06);
			glVertex2f(-18.14, -10.64);
			glVertex2f(-16.92, -10.69);
			glVertex2f(-16.97, -10.06);
			glVertex2f(-17.19, -9.58);
		glEnd();
}

void rightLeg()
{
	glBegin(GL_POLYGON); //Thigh
		glColor3f(1.000, 0.750, 0.000);
		glVertex2f(-19.21, -4.47);
		glVertex2f(-18.67, -4.20);
		glVertex2f(-18.46, -3.94);
		glVertex2f(-18.04, -3.67);
		glVertex2f(-17.61, -3.46);
		glVertex2f(-17.13, -3.30);
		glVertex2f(-16.81, -3.46);
		glVertex2f(-16.55, -3.72);
		glVertex2f(-16.17, -3.99);
		glVertex2f(-15.86, -4.36);
		glVertex2f(-15.54, -4.84);
		glVertex2f(-15.27, -5.21);
		glVertex2f(-15.11, -5.64);
		glVertex2f(-15.00, -6.12);
		glVertex2f(-14.90, -6.12);
		glVertex2f(-14.84, -6.81);//
		glVertex2f(-16.28, -7.93);
		glVertex2f(-17.66, -6.44);
		glVertex2f(-17.93, -6.22);
		glVertex2f(-17.40, -6.60);
		glVertex2f(-18.25, -5.59);
		glVertex2f(-18.57, -5.59);
		glVertex2f(-18.83, -5.21);
		glVertex2f(-19.15, -4.79);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh Border
			glColor3f(0.000, 0.000, 0.000);
			glVertex2f(-19.21, -4.47);
			glVertex2f(-18.67, -4.20);
			glVertex2f(-18.46, -3.94);
			glVertex2f(-18.04, -3.67);
			glVertex2f(-17.61, -3.46);
			glVertex2f(-17.13, -3.30);
			glVertex2f(-16.81, -3.46);
			glVertex2f(-16.55, -3.72);
			glVertex2f(-16.17, -3.99);
			glVertex2f(-15.86, -4.36);
			glVertex2f(-15.54, -4.84);
			glVertex2f(-15.27, -5.21);
			glVertex2f(-15.11, -5.64);
			glVertex2f(-15.00, -6.12);
			glVertex2f(-14.90, -6.12);
			glVertex2f(-14.84, -6.81);//
			glVertex2f(-16.28, -7.93);
			glVertex2f(-17.66, -6.44);
			glVertex2f(-17.93, -6.22);
			glVertex2f(-17.40, -6.60);
			glVertex2f(-18.57, -5.59);
			glVertex2f(-18.83, -5.21);
			glVertex2f(-19.15, -4.79);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 6
		glColor3f(0.495, 0, 0);
		glVertex2f(-16.81, -3.46);
		glVertex2f(-17.24, -3.72);
		glVertex2f(-17.66, -4.10);
		glVertex2f(-17.98, -4.63);
		glVertex2f(-18.14, -5.00);
		glVertex2f(-18.52, -4.52);
		glVertex2f(-18.67, -4.20);
		glVertex2f(-18.46, -3.94);
		glVertex2f(-18.04, -3.67);
		glVertex2f(-17.61, -3.46);
		glVertex2f(-17.13, -3.30);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 6 Border
			glColor3f(0, 0, 0);
			glVertex2f(-16.81, -3.46);
			glVertex2f(-18.14, -5.00);
			glVertex2f(-18.52, -4.52);
			glVertex2f(-18.67, -4.20);
			glVertex2f(-18.46, -3.94);
			glVertex2f(-18.04, -3.67);
			glVertex2f(-17.61, -3.46);
			glVertex2f(-17.13, -3.30);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 2
		glColor3f(0.455, 0.000, 0.000);
		glVertex2f(-18.13, -3.30);
		glVertex2f(-16.81, -3.46);
		glVertex2f(-16.97, -3.29);
		glVertex2f(-16.92, -2.90);
		glVertex2f(-17.59, -2.80);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 2 Border
			glColor3f(0.00, 0.000, 0.000);
			glVertex2f(-18.13, -3.30);
			glVertex2f(-16.81, -3.46);
			glVertex2f(-16.97, -3.29);
			glVertex2f(-16.92, -2.90);
			glVertex2f(-17.59, -2.80);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 3
		glColor3f(0.355, 0.00, 0.000);
		glVertex2f(-16.92, -6.12);
		glVertex2f(-17.45, -5.64);
		glVertex2f(-17.82, -5.32);
		glVertex2f(-18.20, -4.84);
		glVertex2f(-18.52, -4.52);
		glVertex2f(-18.67, -4.20);
		glVertex2f(-19.21, -4.47);
		glVertex2f(-19.15, -4.79);
		glVertex2f(-18.83, -5.21);
		glVertex2f(-18.57, -5.59);
		glVertex2f(-18.25, -5.96);
		glVertex2f(-17.93, -6.22);
		glVertex2f(-17.66, -6.44);
		glVertex2f(-17.40, -6.60);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 3 Border
			glColor3f(0.00, 0.00, 0.000);
			glVertex2f(-16.92, -6.12);
			glVertex2f(-18.67, -4.20);
			glVertex2f(-19.21, -4.47);
			glVertex2f(-19.15, -4.79);
			glVertex2f(-18.83, -5.21);
			glVertex2f(-18.57, -5.59);
			glVertex2f(-18.25, -5.96);
			glVertex2f(-17.93, -6.22);
			glVertex2f(-17.66, -6.44);
			glVertex2f(-17.40, -6.60);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 4
		glColor3f(0.863, 0.863, 0.863);
		glVertex2f(-16.55, -3.72);
		glVertex2f(-16.81, -3.94);
		glVertex2f(-17.19, -4.42);
		glVertex2f(-16.97, -4.89);
		glVertex2f(-16.76, -5.27);
		glVertex2f(-16.55, -5.53);
		glVertex2f(-16.17, -6.01);
		glVertex2f(-15.54, -6.01);
		glVertex2f(-15.06, -5.85);
		glVertex2f(-15.27, -5.21);
		glVertex2f(-15.54, -4.84);
		glVertex2f(-15.86, -4.36);
		glVertex2f(-16.17, -3.99);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 4 Border
			glColor3f(0, 0, 0);
			glVertex2f(-16.55, -3.72);
			glVertex2f(-16.81, -3.94);
			glVertex2f(-17.19, -4.42);
			glVertex2f(-16.97, -4.89);
			glVertex2f(-16.76, -5.27);
			glVertex2f(-16.55, -5.53);
			glVertex2f(-16.17, -6.01);
			glVertex2f(-15.54, -6.01);
			glVertex2f(-15.06, -5.85);
			glVertex2f(-15.27, -5.21);
			glVertex2f(-15.54, -4.84);
			glVertex2f(-15.86, -4.36);
			glVertex2f(-16.17, -3.99);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 5
		glColor3f(0.412, 0.412, 0.412);
		glVertex2f(-16.87, -4.00);
		glVertex2f(-15.91, -5.16);
		glVertex2f(-15.70, -5.00);
		glVertex2f(-16.65, -3.78);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 5 Border
			glColor3f(0,0,0);
			glVertex2f(-16.87, -4.00);
			glVertex2f(-15.91, -5.16);
			glVertex2f(-15.70, -5.00);
			glVertex2f(-16.65, -3.78);
		glEnd();
	glBegin(GL_POLYGON); //Thigh 5
		glColor3f(0.455,0,0);
		glVertex2f(-17.19, -6.44);
		glVertex2f(-16.92, -6.12);
		glVertex2f(-16.17, -6.92);
		glVertex2f(-16.39, -7.50);
	glEnd();
		glBegin(GL_LINE_LOOP); //Thigh 5
			glColor3f(0, 0, 0);
			glVertex2f(-17.19, -6.44);
			glVertex2f(-16.92, -6.12);
			glVertex2f(-16.17, -6.92);
			glVertex2f(-16.39, -7.50);
		glEnd();
}

void ironman(){ // complementary the iron
	rightLeg();
	underWare();
	leftArm();
	body();
	head();
	ack();
	leftLeg();
} 

void windowOfTower()
{
	glBegin(GL_QUADS); //Tower 1.1 - lefe
	glColor3f(windowsRed, windowsGreen, windowsBlue);
		glVertex2f(-30.17, -19.15);
		glVertex2f(-30.17, -18.73);
		glVertex2f(-29.90, -18.73);
		glVertex2f(-29.90, -19.15);
	glEnd();
}

void towerOne()
{
		glBegin(GL_QUADS); //Tower 1.1 - lefe
			glColor3f(0.275, 0.510, 0.706);
			glVertex2f(-30.22, -20.01);
			glVertex2f(-30.22, -19.37);
			glVertex2f(-27.67, -19.37);
			glVertex2f(-27.67, -20.01);
		glEnd();
			glBegin(GL_QUADS); //Tower 1.2 - lefe
				glVertex2f(-30.22, -14.47);
				glVertex2f(-30.22, -19.37);
				glVertex2f(-28.15, -19.37);
				glVertex2f(-28.15, -14.47);
			glEnd();
				glBegin(GL_QUADS); //Tower 1.3 - lefe
					glVertex2f(-30.22, -14.47);
					glVertex2f(-30.22, -11.01);
					glVertex2f(-28.52, -11.01);
					glVertex2f(-28.52, -14.47);
				glEnd();
					glBegin(GL_QUADS); //Tower 1.4 - lefe
						glVertex2f(-30.22, -11.01);
						glVertex2f(-30.22, -9.95);
						glVertex2f(-28.94, -9.95);
						glVertex2f(-28.94, -11.01);
					glEnd();
						glBegin(GL_QUADS); //Tower 1.5 - lefe
							glVertex2f(-30.22, -9.95);
							glVertex2f(-30.22, -8.19);
							glVertex2f(-29.53, -8.19);
							glVertex2f(-29.53, -9.95);
						glEnd();
							glBegin(GL_QUADS); //Tower 1.6 - lefe
								glVertex2f(-29.85, -8.19);
								glVertex2f(-29.79, -7.13);
								glVertex2f(-29.53, -7.13);
								glVertex2f(-29.53, -8.19);
							glEnd();
	glPushMatrix();
	for (int i = 0; i < 3; i++){
		glTranslatef(0.5,0,0);
		windowOfTower();
	}
	glPushMatrix();
	for (int i = 0; i < 4; i++){
		glTranslatef(0, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(0, -1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 6; i++){
		glTranslatef(0, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-1, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 7; i++){
		glTranslatef(0, -1, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void towerTwo(){
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-28.41, -20.00);
		glVertex2f(-28.41, -9.74);
		glVertex2f(-25.01, -9.74);
		glVertex2f(-25.01, -20.00);
	glEnd();
	glBegin(GL_TRIANGLES); 
		glVertex2f(-28.41, -9.74);
		glVertex2f(-26.80, -8.00);
		glVertex2f(-25.01, -9.74);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-26.80, -8.00);
		glVertex2f(-26.80, -4.00);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(2, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, -0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.9, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, -0.8, 0);
		windowOfTower();
	}
	glPopMatrix();
		glBegin(GL_TRIANGLES);
		glVertex2f(-27.99, -9.52);
		glVertex2f(-26.75, -8.60);
		glVertex2f(-25.50, -9.52);
	glEnd();
}

void towerThree()
{
	glBegin(GL_QUADS); 
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(-25.70, -20.00 );
		glVertex2f(-25.70, -12.08);
		glVertex2f(-16.71, -12.08);
		glVertex2f(-16.71, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-22.88, -12.08);
		glVertex2f(-22.88, -9.79);
		glVertex2f(-19.47, -9.79);
		glVertex2f(-19.47, -12.08);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-21.87, -9.79);
		glVertex2f(-21.87, -7.82);
		glVertex2f(-20.48, -7.82);
		glVertex2f(-20.48, -9.79);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(5, 0, 0);
		windowOfTower();
	}
	for (int j = 0; j < 2; j++){
		for (int i = 0; i < 6; i++){
			glTranslatef(0, 1, 0);
			windowOfTower();
		}
		for (int i = 0; i < 1; i++){
			glTranslatef(0.5, 0, 0);
			windowOfTower();
		}
		for (int i = 0; i < 12; i++){
			glTranslatef(0, -0.5, 0);
			windowOfTower();
		}
		for (int i = 0; i < 1; i++){
			glTranslatef(0.5, 0, 0);
			windowOfTower();
		}
		for (int i = 0; i < 12; i++){
			glTranslatef(0, 0.5, 0);
			windowOfTower();
		}
		for (int i = 0; i < 1; i++){
			glTranslatef(1, 0, 0);
			windowOfTower();
		}
		for (int i = 0; i < 12; i++){
			glTranslatef(0, -0.5, 0);
			windowOfTower();
		}
		for (int i = 0; i < 1; i++){
			glTranslatef(0.5, 0, 0);
			windowOfTower();
		}
		for (int i = 0; i < 12; i++){
			glTranslatef(0, 0.5, 0);
			windowOfTower();
		}
		for (int i = 0; i < 1; i++){
			glTranslatef(0.5, 0, 0);
			windowOfTower();
		}
		for (int i = 0; i < 6; i++){
			glTranslatef(0, -1, 0);
			windowOfTower();
		}
		if (j < 1){
			for (int i = 0; i < 1; i++){
				glTranslatef(1, 0, 0);
				windowOfTower();
			}
		}
	}
	glPopMatrix();
}

void towerFour()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-16.71, -20.00);
		glVertex2f(-16.71, -13.73);
		glVertex2f(-15.38, -13.73);
		glVertex2f(-15.38, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-15.38, -20.00);
		glVertex2f(-15.38, -16.60);
		glVertex2f(-12.29, -16.60);
		glVertex2f(-12.29, -20.00);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(-15.38, -16.60);
		glVertex2f(-13.51, -15.20);
		glVertex2f(-12.29, -16.60);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-15.64, -11.76);
		glVertex2f(-15.64, -16.60);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(13.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 6; i++){
		glTranslatef(0, 0.7, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 6; i++){
		glTranslatef(0, -0.7, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void towerFive()
{
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(-12.40, -20.00);
		glVertex2f(-12.40, -8.62);
		glVertex2f(-7.02, -12.18);
		glVertex2f(-7.02, -20.00);
	glEnd();

	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(18, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.8, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 12; i++){
		glTranslatef(0, -0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 10; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	glPopMatrix();

	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(18.8, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 6; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-1.5, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-1.5, 1, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void towerSix()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-7.18, -20.00);
		glVertex2f(-7.18, -12.02);
		glVertex2f(-4.68, -12.02);
		glVertex2f(-4.68, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-4.68, -20.00);
		glVertex2f(-4.68, -12.98);
		glVertex2f(-4.26, -12.98);
		glVertex2f(-4.26, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-3.30, -20.00);
		glVertex2f(-3.30, -14.58);
		glVertex2f(-4.26, -14.58);
		glVertex2f(-4.26, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-5.91, -12.02);
		glVertex2f(-5.91, -11.07);
		glVertex2f(-5.05, -11.07);
		glVertex2f(-5.05, -12.02);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(23.6, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 13; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, -2, 0);
		windowOfTower();
	}
	for (int i = 0; i < 8; i++){
		glTranslatef(0, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(2, 2, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	glPopMatrix();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(23.2, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 11; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 4; i++){
		glTranslatef(0.3, -0.5, 0);
		windowOfTower();
	}
	setColorWindows = 0;
	glPopMatrix();
}

void towerSeven()
{
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);	
		glVertex2f(-6.12, -20.00);
		glVertex2f(-6.12, -18.46);
		glVertex2f(-0.37, -18.46);
		glVertex2f(-0.37, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(-5.11, -18.46);
		glVertex2f(-5.11, -17.08);
		glVertex2f(-1.49, -17.08);
		glVertex2f(-1.49, -18.46);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(-5.11, -18.46);
		glVertex2f(-3.25, -15.38);
		glVertex2f(-1.44, -18.46);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(25, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(2, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}

	glPopMatrix();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(25.5, -1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	
	for (int i = 0; i < 5; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	setColorWindows = 0;
	glPopMatrix();

	glBegin(GL_TRIANGLES);
		glColor3f(0.863, 0.863, 0.863);
		glVertex2f(-3.75, -16.81);
		glVertex2f(-3.25, -15.99);
		glVertex2f(-2.75, -16.81);
	glEnd();
}

void towerEight()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(0.48, -20.00);
		glVertex2f(0.48, -12.93);
		glVertex2f(4.26, -12.93);
		glVertex2f(4.26, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(1.28, -12.93);
		glVertex2f(1.28, -11.97);
		glVertex2f(3.83, -11.97);
		glVertex2f(3.83, -12.93);
	glEnd();
	glBegin(GL_TRIANGLES);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(1.28, -11.97);
		glVertex2f(2.55, -10.75);
		glVertex2f(3.83, -11.97);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(30.7, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 10; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 12; i++){
		glTranslatef(0, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 2, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, 3, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(-0.50, 0, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void towerNine()
{
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(2.02, -20.00);
		glVertex2f(2.02, -19.47);
		glVertex2f(7.34, -19.47);
		glVertex2f(7.34, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(3.03, -19.47);
		glVertex2f(3.03, -14.15);
		glVertex2f(6.33, -14.15);
		glVertex2f(6.33, -19.47);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(3.46, -14.15);
		glVertex2f(3.46, -9.31);
		glVertex2f(5.85, -9.31);
		glVertex2f(5.85, -14.15);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(3.99, -9.31);
		glVertex2f(3.99, -5.50);
		glVertex2f(5.32, -5.50);
		glVertex2f(5.32, -9.31);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2f(5.00, -5.75);
		glVertex2f(5.00, -3.20);
	glEnd();
	glLineWidth(1);
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(35, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 13; i++){
		glTranslatef(0, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 26; i++){
		glTranslatef(0,-0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 9; i++){
		glTranslatef(0, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, -4.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0, -1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-2, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 18; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5,-4, 0);
		windowOfTower();
	}
	glPopMatrix();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(37, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 8; i++){
		glTranslatef(0, -0.7, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(1, 2, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, 3, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 10; i++){
		glTranslatef(0, -1, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void towerTen()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-25.70, -20.00);
		glVertex2f(-25.70, -12.08);
		glVertex2f(-16.71, -12.08);
		glVertex2f(-16.71, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-22.88, -12.08);
		glVertex2f(-22.88, -9.79);
		glVertex2f(-19.47, -9.79);
		glVertex2f(-19.47, -12.08);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-21.87, -9.79);
		glVertex2f(-21.87, -7.82);
		glVertex2f(-20.48, -7.82);
		glVertex2f(-20.48, -9.79);
	glEnd();
}

void towerEleven()
{
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(11.86, -20.00);
		glVertex2f(11.86, -14.63);
		glVertex2f(17.13, -14.63);
		glVertex2f(17.13, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(12.77, -14.63);
		glVertex2f(13.19, -12.88);
		glVertex2f(16.07, -12.88);
		glVertex2f(17.12, -14.63);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(15.59, -12.88);
		glVertex2f(15.59, -10.85);
		glVertex2f(14.58, -10.85);
		glVertex2f(14.58, -12.88);
	glEnd();
	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(42, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 3; i++){
		glTranslatef(0.4,0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(1, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 5; i++){
		glTranslatef(0, -1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 6; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 7; i++){
		glTranslatef(0, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(-0.5, -0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 6; i++){
		glTranslatef(0, 0.5, 0);
		windowOfTower();
	}
	glPopMatrix();

	glPushMatrix();
	for (int i = 0; i < 1; i++){
		glTranslatef(48, 2, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, -2, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0, -1, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void towerTwelve()
{
	glBegin(GL_QUADS);
		glColor3f(0.275, 0.510, 0.706);
		glVertex2f(-28.41, -20.00);
		glVertex2f(-28.41, -9.74);
		glVertex2f(-25.01, -9.74);
		glVertex2f(-25.01, -20.00);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(-28.41, -9.74);
		glVertex2f(-26.80, -8.00);
		glVertex2f(-25.01, -9.74);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-26.80, -8.00);
		glVertex2f(-26.80, -4.00);
	glEnd();
}

void towerThirteen()
{

	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-12.40, -20.00);
		glVertex2f(-12.40, -8.62);
		glVertex2f(-7.02, -12.18);
		glVertex2f(-7.02, -20.00);
	glEnd();
}

void towerFourteen()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(2.02, -20.00);
		glVertex2f(2.02, -19.47);
		glVertex2f(7.34, -19.47);
		glVertex2f(7.34, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(3.03, -19.47);
		glVertex2f(3.03, -14.15);
		glVertex2f(6.33, -14.15);
		glVertex2f(6.33, -19.47);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(3.46, -14.15);
		glVertex2f(3.46, -9.31);
		glVertex2f(5.85, -9.31);
		glVertex2f(5.85, -14.15);
	glEnd();
}

void towerFiftteen()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-16.71, -20.00);
		glVertex2f(-16.71, -13.73);
		glVertex2f(-15.38, -13.73);
		glVertex2f(-15.38, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-15.38, -20.00);
		glVertex2f(-15.38, -16.60);
		glVertex2f(-12.29, -16.60);
		glVertex2f(-12.29, -20.00);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(-15.38, -16.60);
		glVertex2f(-13.51, -15.20);
		glVertex2f(-12.29, -16.60);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(-15.64, -11.76);
		glVertex2f(-15.64, -16.60);
	glEnd();
}

void towerSixteen()
{
	glBegin(GL_QUADS);
	glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-7.18, -20.00);
		glVertex2f(-7.18, -12.02);
		glVertex2f(-4.68, -12.02);
		glVertex2f(-4.68, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-4.68, -20.00);
		glVertex2f(-4.68, -12.98);
		glVertex2f(-4.26, -12.98);
		glVertex2f(-4.26, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-3.30, -20.00);
		glVertex2f(-3.30, -14.58);
		glVertex2f(-4.26, -14.58);
		glVertex2f(-4.26, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-5.91, -12.02);
		glVertex2f(-5.91, -11.07);
		glVertex2f(-5.05, -11.07);
		glVertex2f(-5.05, -12.02);
	glEnd();
}

void towerSeventeen()
{
	glBegin(GL_QUADS);
		glColor3f(1.000, 0.627, 0.478);
		glVertex2f(-6.12, -20.00);
		glVertex2f(-6.12, -18.46);
		glVertex2f(-0.37, -18.46);
		glVertex2f(-0.37, -20.00);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(-5.11, -18.46);
		glVertex2f(-5.11, -17.08);
		glVertex2f(-1.49, -17.08);
		glVertex2f(-1.49, -18.46);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(-5.11, -18.46);
		glVertex2f(-3.25, -15.38);
		glVertex2f(-1.44, -18.46);
	glEnd();
}

void background(){ // complementary background
	towerTwo();
	towerOne();
	towerFour();
	towerThree();
	towerSix();
	towerFive();
	towerEight();
	towerSeven();

	glPushMatrix();
		glTranslatef(30, -5, 0);
		towerThirteen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(30, -3, 0);
		towerTen();
	glPopMatrix();

	towerNine();
	towerEleven();

	glPushMatrix();
		glTranslatef(47, 0, 0);
		towerTwelve();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(34, 0, 0);
		towerFourteen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(39.5, 0, 0);
		towerFiftteen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(39.5, -4, 0);
		towerSixteen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(33, 0, 0);
		towerSeventeen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(65, 0, 0);
		towerThree();
	glPopMatrix();

	for (int i = 0; i < 1; i++){
		glTranslatef(49.5, 0, 0);
		windowOfTower();
	}for (int i = 0; i < 10; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, -1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 10; i++){
		glTranslatef(0, -0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, -1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 1, 0);
		windowOfTower();
	}
	for (int i = 0; i < 10; i++){
		glTranslatef(0, 0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){ // for tower 13 - 16
		glTranslatef(2, -5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(0, -0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, -0.8, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(2.2, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 1; i++){
		glTranslatef(0.5, 0.5, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(0.8, 0, 0);
		windowOfTower();
	}
	for (int i = 0; i < 2; i++){
		glTranslatef(0.8, -0.8, 0);
		windowOfTower();
	}
	glPopMatrix();
}

void rightArmSP()
{
	glPushMatrix();
		glTranslatef(-22.13, -4.10, 0);
		glRotatef(degreearm, 0, 0, 1);
		glTranslatef(22.20, 4.20, 0);
		rightArm();
	glPopMatrix();
}

void leftlegSP()
{
	glPushMatrix();
		glTranslatef(-22.13, -4.10, 0);
		glRotatef(degreeleg, 0, 0, 1);
		glTranslatef(22.35, 4.20, 0);
		leftlegDown();
	glPopMatrix();
}

void rightletSP()
{
	glPushMatrix();
		glTranslatef(-22.13, -4.10, 0);
		glRotatef(degreeleg, 0, 0, 1);
		glTranslatef(22.13, 4.50, 0);
		rightLegDown();
	glPopMatrix();
}

void superAck()
{
	glBegin(GL_TRIANGLES);
		glColor3f(0.000, 0.749, 1.000);
		glVertex2f(-18.62, 2.93);
		glVertex2f(-17.52, 2.93);
		glVertex2f(-18.04, 2.07);
	glEnd();
		glBegin(GL_LINE_LOOP);
			glColor3f(0.118, 0.565, 1.000);
			glVertex2f(-18.62, 2.93);
			glVertex2f(-17.52, 2.93);
			glVertex2f(-18.04, 2.07);
		glEnd();
}

void superAckSP()
{
	glPushMatrix();
		glTranslatef(-17.98, 2.55, 0);
		glRotatef(-sin(speedSuperAck) * 10000, 0, 0, 1);
		glTranslatef(17.98, -2.55,0);
		superAck();
	glPopMatrix();
	speedSuperAck += 0.00001;
	glutPostRedisplay();
}

void beam()
{
	float r = 1.000;
	float g = 0.743;
	float b = 0.150;
	glBegin(GL_POLYGON);
		glColor3f(r+speedColor2, g+speedColor2, b+speedColor2);
		glVertex2f(-10.64, 2.50);
		glVertex2f(-10.64, 2.00);
		glVertex2f(80.84, -3.50);
		glVertex2f(80.84, 4.50);
	glEnd();
		glBegin(GL_LINE_LOOP);
			glColor3f(0.741, 0.718, 0.420);
			glVertex2f(-10.64, 2.50);
			glVertex2f(-10.64, 2.00);
			glVertex2f(80.84, -3.50);
			glVertex2f(80.84, 4.50);
		glEnd();
		
	glLineWidth(1);
}

void beamEffect()
{
	glColor3f(0.878, 1.000, 1.000);
	MyEllipse(3, 2.2, 1.00, 0.30);
	glBegin(GL_TRIANGLES);
		glVertex2f(3, 2.00);
		glVertex2f(3.5, 1.6);
		glVertex2f(3, 1.00);
	glEnd();
}

void beamEffect2()
{
	glBegin(GL_LINES);
		glColor3f(0.686, 0.933, 0.933);
		glVertex2f(-10.64, 2.50);
		glVertex2f(80.00, 3.50);
	glEnd();
}

void beamEffect3()
{
	glBegin(GL_LINES);
	glColor3f(0.498, 1.000, 0.831);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, 2.50);
	glEnd();
}

void beamEffect4()
{
	glBegin(GL_LINES);
	glColor3f(0.251, 0.878, 0.816);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, 1.50);
	glEnd();
}

void beamEffect5()
{
	glBegin(GL_LINES);
	glColor3f(0.686, 0.933, 0.933);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, 0.50);
	glEnd();
}

void beamEffect6()
{
	glBegin(GL_LINES);
	glColor3f(0.498, 1.000, 0.831);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, -0.50);
	glEnd();
}

void beamEffect7()
{
	glBegin(GL_LINES);
	glColor3f(0.251, 0.878, 0.816);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, -1.50);
	glEnd();
}

void beamEffect8()
{
	glBegin(GL_LINES);
	glColor3f(0.686, 0.933, 0.933);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, -2.50);
	glEnd();
}

void beamEffect9()
{
	glBegin(GL_LINES);
	glColor3f(0.498, 1.000, 0.831);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, -3.50);
	glEnd();
}

void beamEffect10()
{
	glBegin(GL_LINES);
	glColor3f(0.251, 0.878, 0.816);
	glVertex2f(-10.64, 2.50);
	glVertex2f(80.00, -4.50);
	glEnd();
}

void beamEffectSP()
{
	glPushMatrix();
		glTranslatef(0.5+beamEX, 0, 0);
		beamEffect2();
		beamEffect3();
		beamEffect4();
		beamEffect5();
		beamEffect6();
		beamEffect7();
		beamEffect8();
		beamEffect9();
		beamEffect10();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0 + beamEX, 0, 0);
		glRotatef(beamEX * 100, 0, 0, 1);
		beamEffect();
	glPopMatrix();
	if (StartbeamEX == 1){
		beamEX += 0.08;
	}
	if (beamEX >= 80){
		beamEX = 0.00;
	}
}

void beamSP()
{
	glPushMatrix();
		glTranslatef(setbeam, 0.25, 0);
		glRotatef(degreearm-2.5, 0, 0, 1);
		beam();
		beamEffectSP();
	glPopMatrix();
}

void booster()
{
	glColor3f(1.000, 0.271+speedColor, 0.000+speedColor);
	glPushMatrix();
		glTranslatef(-26.28, -15.27, 0);
		glRotatef(45, 0, 0, 1);
		glTranslatef(26.28, 15.27, 0);
		MyEllipse2(-26.28, -15.27, 1.8, 0.8);
	glPopMatrix();

	glColor3f(1.000, 0.647-speedColor, 0.000-speedColor);
	glPushMatrix();
		glTranslatef(-25.43, -14.37, 0);
		glRotatef(45, 0, 0, 1);
		glTranslatef(25.43, 14.37, 0);
		MyEllipse2(-25.43, -14.37, 2.5,  0.5);
	glPopMatrix();
}

void booster2()
{
	glColor3f(1.000, 0.647+speedColor, 0.000+speedColor);
	glPushMatrix();
		glTranslatef(-20.06, -12.08, 0);
		glRotatef(45, 0, 0, 1);
		glTranslatef(20.06, 12.08, 0);
		MyEllipse2(-20.06, -12.08, 1.5, 0.6);
	glPopMatrix();

	glColor3f(1.000, 0.271-speedColor, 0.000-speedColor);
	glPushMatrix();
		glTranslatef(-19.47, -11.4, 0);
		glRotatef(45, 0, 0, 1);
		glTranslatef(19.47, 11.4, 0);
		MyEllipse2(-19.47, -11.4, 2.0, 0.4);
	glPopMatrix();
}

void IronmanStart()
{
	glPushMatrix();
		glTranslatef(0, ironStart, 0);
		ironman();
		if (startJet == 1){
			booster();
			booster2();
		}
		leftlegSP();
		rightletSP();
		rightArmSP();
		beamSP();
		superAckSP();
	glPopMatrix();
	ironStart += 0.001;
	if (ironStart > 1.00){ ironStart = 0.00; }
}

void moveIron()
{
	glPushMatrix();
		glTranslatef(speedIronD, speedIronW, 0);
		IronmanStart();
		if (speedIronD >= 81){
			speedIronD = -20.00;
		}
		if (speedIronD <= -25){
			speedIronD = 80;
		}
		if (speedIronW >= 40){
			speedIronW = -30.00;
		}
		if (speedIronW <= -31){
			speedIronW = 39.00;
		}
	glPopMatrix();
	glutPostRedisplay();
}

void moveCloud()
{
	glPushMatrix();
		glTranslatef(-speedCloud, 0, 0);
		cloud();
		glPopMatrix();
		speedCloud += 0.005;
			if (speedCloud>= 60){ speedCloud = -20.00; }
	glPopMatrix();
}

void keyboard(unsigned char key, int d, int a) {
	switch (key) {
	case 'D': 
	case 'd': speedIronD += 0.40;
		degreeleg = -5.00; glutPostRedisplay();
		startJet = 1;
		speedColor -= 0.05;
		speedSuperAck += 0.002;
		printf("Move Forward\n");
		break;
	case 'A':
	case 'a': speedIronD -= 0.40;
		degreeleg = 1.00; glutPostRedisplay();
		speedColor += 0.05;
		speedSuperAck += 0.002;
		printf("Turn Back\n");
		break;
	case 'W':
	case 'w': speedIronW += 0.20;
		speedSuperAck += 0.001;
		printf("Move Up\n");
		break;
	case 'S':
	case 's': speedIronW -= 0.20;
		speedSuperAck += 0.001;
		printf("Move Down\n");
		break;
	}
}

void mymouse(int button, int state, int x, int y)
{
	if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON)
		degreearm = 2.00;
		setbeam = 0.00;
		StartbeamEX = 1;
		speedColor2 += 0.05;
		printf("Fire\n");
	if (state == GLUT_UP && button == GLUT_LEFT_BUTTON)
		degreearm = 0.00;
		speedColor2 -= 0.04;
}

void mainmenu(int value) {
	switch (value) {
	case 1: backgroundRed = 0.028;
			backgroundGreen = 0.028;
			backgroundBlue = 0.139;
			CloudRed = 0.098;
			CloudGreen = 0.098;
			CloudBlue = 0.439;
			windowsRed = 1.000;
			windowsGreen = 1.000;
			windowsBlue = 0.300;
			printf("Change to Night Mode\n");
	break;

	case 2: backgroundRed = 0.686;
			backgroundGreen = 0.933;
			backgroundBlue = 0.933;
			CloudRed = 0.961;
			CloudGreen = 0.961;
			CloudBlue = 0.961;
			windowsRed = 1.000;
			windowsGreen = 1.000;
			windowsBlue = 1.000;
			printf("Change to Day Mode\n");
	break;

	case 999: exit(0);
	}
}

void title(){
	printf("\n");
	printf("	HOW TO USE IRONMAN OPENGL Version Alpha1.0.\n");
	printf("		Change the language on keybord to English.\n");
	printf("		Prees 'Left Click' to Fired the Beam\n");
	printf("		Press 'D' to go Forward.\n");
	printf("		Press 'A' to go Backward.\n");
	printf("		Press 'W' to go Up.\n");
	printf("		Press 'S' to go Down.\n");
	printf("		Press 'Right Click' to Call MENU.\n");
	printf("	Play and Enjoy\n");
}

void display(void)
{
	glClearColor(backgroundRed, backgroundGreen, backgroundBlue, backgroundAlpha);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D(-30.0, 45.0, -20.0, 18.00);
	moveCloud();
	glPushMatrix();
		background();
	glPopMatrix();
	moveIron();
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	int nightMode;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1290, 625);
	glutInitWindowPosition(80,80);
	glutCreateWindow("IRONMAN OpenGL v.Alpha 1.0 Develop By IceYahzAIYARUCK");
	glutKeyboardFunc(keyboard);
	glutCreateMenu(mainmenu);
	glutAddMenuEntry("Night Mode", 1);
	glutAddMenuEntry("Day Mode", 2);
	glutAddMenuEntry("Quit", 999);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMouseFunc(mymouse);
	title();
	glutDisplayFunc(display);
	glutMainLoop();
}