#include <stdlib.h>
#include <gl/glut.h>

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

	glFlush();
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
		glColor3f(0.698, 0.133, 0.133);
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
		glColor3f(0.698, 0.133, 0.133);
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
	glColor3f(0.898, 0.033, 0.099);
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
			glColor3f(0.898, 0.033, 0.099);
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
		glColor3f(0.898, 0.033, 0.099);
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
			//glVertex2f(-21.41, 2.71);
			//glVertex2f(-21.76, 2.29);
			//glVertex2f(-22.40, 1.97);
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
		glColor3f(0.898, 0.033, 0.099);
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



	glFlush();
}
void rightArm()
{


}
void display(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	body();
	head();

	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1290, 625);
	glutInitWindowPosition(40,80);
	glutCreateWindow("IronmanOP");
	glutReshapeFunc;
	gluOrtho2D(-30.0, 30.0, -16.0, 16.0);
	glutDisplayFunc(display);
	glutMainLoop();
}