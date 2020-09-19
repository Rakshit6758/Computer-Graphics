#include<GL/glut.h>
#include <cmath>
void init()
{
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-10,10,-10,10,20,-20);
}
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  //glPointSize(2);
     glBegin(GL_LINES);
     glColor3f(1.0,1.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         float theta2= (i-0.5)*3.142/180;
         glVertex2f(8*cos(theta1),8*sin(theta1));
         glVertex2f(8*cos(theta2),8*sin(theta2));
     }
     glEnd();
     glBegin(GL_LINES);
     glColor3f(1.0,1.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         float theta2= (i-0.5)*3.142/180;
         glVertex2f(1.3*cos(theta1) + 3,1.3*sin(theta1) + 3);
         glVertex2f(1.3*cos(theta2) +3 ,1.3*sin(theta2) +3);
     }
     glEnd();
     glBegin(GL_LINES);
     glColor3f(1.0,1.0,0.0);
     for(int i=0;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         float theta2= (i-0.5)*3.142/180;
         glVertex2f(1.3*cos(theta1) - 3,1.3*sin(theta1) + 3);
         glVertex2f(1.3*cos(theta2) -3 ,1.3*sin(theta2) +3);
     }
     glEnd();
     glBegin(GL_LINES);
     glColor3f(1.0,1.0,0.0);
     for(int i=180;i<360;i++)
     {
         float theta1= (i+0.5)*3.142/180;
         float theta2= (i-0.5)*3.142/180;
         glVertex2f(6*cos(theta1),6*sin(theta1));
         glVertex2f(6*cos(theta2),6*sin(theta2));
     }
     glEnd();
  glFlush();
}
int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(800,100);
 glutCreateWindow("Smiley");
 init();
 glutDisplayFunc(display);
 glutMainLoop();
}