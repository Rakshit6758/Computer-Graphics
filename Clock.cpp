#include<iostream>
// #include<windows.h>
#include<GL/glut.h>
// #include<gl/GL.h>
// #include<glut.h>
#include<math.h>
#define PI 3.141592653589793

GLfloat secAngle=0.0;
GLfloat minAngle=0.0;
GLfloat hourAngle=0.0;
GLfloat hour=0.0;
GLfloat x1=0.0;
GLfloat y2=0.0;
GLfloat z1=0.0;
GLfloat radius = 10.0;
GLfloat smallradius = 3.0;
int angle;

void smallLines(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,int);
void secondsLine(void);
void minutesLines(void);
void hourLine(void);
void centerpoint(void);
void cirlce(void);

void myInit(void)
{
	glColor3f(1.0f,0.0f,0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void DrawClock()
{
	char buff[100];
	glLoadIdentity();
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glOrtho(0.0, 20.0, 0.0, 20.0, -10.0, 10.0);
	glClear(GL_COLOR_BUFFER_BIT);
}

	// -------------------------------   Circle  -------------------------------------------

void cirlce()
	{
	glClearColor(1.0, 1.0, 1.0, 1.0);

	glPushMatrix();
	glTranslatef(10.0, 10.0, 10.0);
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(x1, y2, z1);
	for(angle=0; angle <= 360; angle +=1)
		glVertex3f(x1 + cos(angle * PI/180.0f)* radius, y2 + sin(angle * PI/180.0f) * radius, z1);
	glEnd();
	glPopMatrix();
}

	// -------------------------------   Small Lines  ---------------------------------------	

void smallLines(GLfloat x1,GLfloat y2,GLfloat z1,GLfloat radius,GLfloat smallradiu,int angle)
{
	glPushMatrix();
	glTranslatef(10.0, 10.0, 0.0);
	glColor3f(0.2,0.2,0.2);
	glLineWidth(2);
	for(angle=0; angle <= 360; angle +=30)
	{
	glBegin(GL_LINES);
		if(angle == 0.0 || angle==90.0 || angle == 180.0 || angle == 270.0 || angle == 360.0 )
		{
		glColor3f(1.0,0.2,0.2);
		glVertex3f(x1 + cos(angle * PI/180.0f)* (radius-1.2), y2 + sin(angle * PI/180.0f) * (radius-1.2), z1+0.1);
		glVertex3f(x1 + cos(angle * PI/180.0f)* radius, y2 + sin(angle * PI/180.0f) * radius, z1+0.1);
		}
		else
		{
		glColor3f(0.2,0.2,0.2);
		glVertex3f(x1 + cos(angle * PI/180.0f)* (radius-0.5), y2 + sin(angle * PI/180.0f) * (radius-0.5), z1);
		glVertex3f(x1 + cos(angle * PI/180.0f)* radius, y2 + sin(angle * PI/180.0f) * radius, z1);
		}
	glEnd();
	}
	glPopMatrix();
}

	// -------------------------------   Center Point  ---------------------------------------

void centerpoint()
{
	glColor3f(0.0,0.0,0.0);
	glPointSize(8.0);
	
	glPushMatrix();
	glTranslatef(10.0, 10.0, 0.0);
	glBegin(GL_POINTS);
	glVertex3f(0.0,0.0,0.0);
	glEnd();
	glPopMatrix();
	//glFlush();
	
}

	// -------------------------------   Seconds Line  ---------------------------------------

void secondsLine()
{
	glColor3f(1.0,1.0,0.0);
	glLineWidth(2.0);
	glPushMatrix();
	glTranslatef(10.0, 10.0, 0.0);
	glRotatef(-secAngle,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(0,0);
	glVertex2f(7,7);
	glEnd();
	glPopMatrix();
}

	// -------------------------------   Minutes Line  ---------------------------------------

void minutesLines()
{
	glColor3f(1.0,0.0,0.0);
	glLineWidth(2.0);
	glPushMatrix();

	glTranslatef(10.0, 10.0, 0.0);
	glRotatef(-minAngle, 0.0, 0.0, 1.0);
	glBegin(GL_LINES);
	glVertex3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 7.0, 1.0);
	glEnd();
	glPopMatrix();
}

	// -------------------------------   Hour Line  ------------------------------------------

void hourLine()
{
	glColor3f(0.0,1.0,0.0);
	glLineWidth(3.0);
	glPushMatrix();

	glTranslatef(10.0, 10.0, 0.0);
	glRotatef(-hourAngle, 0.0, 0.0, 1.0);

	glBegin(GL_LINES);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 6.5, 0.0);
	glEnd();
	glPopMatrix();
}

	// -------------------------------   Idel Function  ---------------------------------------

void Idle(void)
{
	secAngle += 0.1;
	hourAngle += 0.01;
	minAngle += 0.2;
	
	cirlce();
	smallLines(x1,y2,z1,radius,smallradius,angle);
	centerpoint();
	secondsLine();
	minutesLines();
	hourLine();
	glFlush();
}

int main(int argc , char **argv)
{
	glutInit(&argc , argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(200,300);
	glutCreateWindow("Analog Clock");
	
	glutDisplayFunc(DrawClock);
	glutIdleFunc(Idle);
	myInit();
	glutMainLoop();
}