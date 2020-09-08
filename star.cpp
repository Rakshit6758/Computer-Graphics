#include <GL/glut.h>
#include <math.h>
void line_join(float x1 , float y1 , float x2 , float y2){
    
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
}
void circle()
{
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
glColor3f(1.0,1.0,1.0);
    for(int i=0; i<500; i++)
    {
        theta = i*3.142/180;
        glVertex2f(200*cos(theta),200*sin(theta));
    }
}

void displayMe(void)
{
	glClearColor(0,0,0,0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0,100,0,100);
    glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_LINES);
    
    glColor3f(1.0,0.5,1.0);
    
    line_join(50,97,5,25);
    line_join(50,97,95,25);
    line_join(5,25,95,25);
    
   glColor3f(1.0,0.7,1.0);
    
    
    line_join(50,3,5,75);
    line_join(50,3,95,75);
    line_join(5,75,95,75);
    
 circle();
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Rakshit Kapoor");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
