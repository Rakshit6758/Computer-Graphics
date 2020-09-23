#include <GL/glut.h>

GLfloat xRotate, yRotate;
GLdouble radius=1;


void display(void);
void reshape(int x, int y);
void idle(void)
{
 
xRotate += 0.1;
yRotate += 0.1;
    display();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutCreateWindow("Solid Sphere");
    xRotate = yRotate = 30.0;
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}

void display(void)
{
    glMatrixMode(GL_MODELVIEW);  
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();  
    glTranslatef(0.0,0.0,-6.0);  
    glColor3f(0.6, 0.7, 0.9);    
    glRotatef(xRotate,1.0,0.0,0.0);  
    glRotatef(yRotate,0.0,1.0,0.0);    
    glScalef(1.0,1.0,1.0);  
    glutWireSphere(radius,20,25);  
    glFlush();          
}

void reshape(int x, int y)
{
    if (y == 0 || x == 0) return;  
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();
    gluPerspective(39.0,(GLdouble)x/(GLdouble)y,0.6,21.0);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);  
}
