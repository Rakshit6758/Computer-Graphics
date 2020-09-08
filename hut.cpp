#include <GL/glut.h>

GLfloat t,u=1;
void line_join(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2); 
}
void display()
{
	glClearColor(0,0,0,0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0,100,0,100);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.7,0.7);
	glLineWidth(5);
	glColor3f(t,u,0.0);
	glBegin(GL_LINES);

	line_join(50,80,40,60);
	line_join(50,80,60,60);
	line_join(40,60,60,60);

	line_join(40,60,40,30);
	line_join(60,60,60,30);
	line_join(40,30,60,30);

	line_join(45,30,45,45);
	line_join(55,30,55,45);
	line_join(45,45,55,45);


glEnd();
glFlush();
}

void key(unsigned char button,int x, int y)
{
	if(button=='s','a','d')
	{	t=0;
		u=1;
	}
	else if(button=='q','w','e')
	{	t=1;
		u=0;
	}
	else{
	}
	glutPostRedisplay();
}

void mouse(int button,int state,int x, int y)
{
 	if(button==GLUT_LEFT_BUTTON)
	{
		t=0;
		u=1;
	}
	else if(button==GLUT_RIGHT_BUTTON)
	{
		t=1;
		u=0;
	}
	else{
	}
	glutPostRedisplay();
	}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500, 500);
glutInitWindowPosition(200, 200);
glutCreateWindow("Hut Color Change");
//init();
glutDisplayFunc(display);
glutKeyboardFunc(key);
glutMouseFunc(mouse);
glutMainLoop();
return 0;
}
