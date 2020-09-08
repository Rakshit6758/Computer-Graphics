#include <GL/glut.h>
#include <math.h>
void line_join(float x1 , float y1 , float x2 , float y2){
    
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    
}

void cirlce()
{
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    for(int i=0; i<1000; i++)
    {
        theta = i*3.142/180;
        glVertex2f(1*cos(theta),1*sin(theta));
    }
    glEnd();
    glFlush();
}
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    
    glColor3f(1.0,0.0,1.0);
    
    line_join(0.0, 1.0, -0.86, -0.50);
    line_join(0.0, 1.0, 0.86, -0.50);
    line_join(-0.86, -0.50, 0.86, -0.50);
    line_join(0.0, 1.0, 0.0, -0.50);
    line_join(0.0, 0.8, 0.086, 0.849);
    line_join(0.0, 0.6, 0.173, 0.699);
    line_join(0.0, 0.4, 0.26, 0.548);
    line_join(0.0, 0.2, 0.346, 0.397);
    line_join(0.0, 0.0, 0.433, 0.247);
    line_join(0.0, -0.2, 0.519, 0.096);
    line_join(0.0, -0.4, 0.606, -0.055);
    line_join(0.0, -0.5, 0.649, -0.13);
    line_join(0.0, 0.8, -0.115, 0.8);
    line_join(0.0, 0.6, -0.23, 0.6);
    line_join(0.0, 0.4, -0.345, 0.4);
    line_join(0.0, 0.2, -0.46, 0.2);
    line_join(0.0, 0.0, -0.575, 0.0);
    line_join(0.0, -0.2, -0.69, -0.2);
    line_join(0.0, -0.4, -0.805, -0.4);
    line_join(0.0, -0.5, -0.862, -0.5);
   /* glColor3f(1.0,1.0,1.0);
    
    
    line_join(0.0, -1.0, 0.86, 0.50);
    line_join(0.0, -1.0, -0.86, 0.50);
    line_join(0.86, 0.50, -0.86, 0.50);
    
    glColor3f(1.0,1.0,1.0);
    
    
    line_join(0.0, 0.5, 0.43, -0.25);
    line_join(0.0, 0.5, -0.43, -0.25);
    line_join(0.43, -0.25, -0.43, -0.25);
    
    glColor3f(1.0,0.0,1.0);
    
    line_join(0.0, -0.250, 0.216, 0.125);
    line_join(0.0, -0.250, -0.216, 0.125);
    line_join(0.216, 0.125, -0.216, 0.125); */
    
   glColor3f(1.0,1.0,1.0);
    cirlce();
    
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(550, 550);
    glutCreateWindow("Tricircle");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
