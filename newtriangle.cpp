#include <GL/glut.h>

GLfloat t,u=1;
void init()
{
	glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0,500,0,500,0,10);
}

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(t,u,0);
glBegin(GL_TRIANGLES);
glVertex2f(50,50);
glVertex2f(200,50);
glVertex2f(125,250);
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
glutInitWindowPosition(600, 600);
glutCreateWindow("Triangle Color Change");
init();
glutDisplayFunc(display);
glutKeyboardFunc(key);
glutMouseFunc(mouse);
glutMainLoop();
return 0;
}
