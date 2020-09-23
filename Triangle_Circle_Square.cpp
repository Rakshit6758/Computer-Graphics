#include <GL/glut.h>
#include <math.h>
 
void line_join(float x1 , float y1 , float x2 , float y2){
   
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
    glFlush();   
}
 
void drawHollowCircle(GLfloat x, GLfloat y, GLfloat radius){
    int i;
    int lineAmount = 100; //# of triangles used to draw circle
   
    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * 3.14;
   
    glBegin(GL_LINE_LOOP);
    for(i = 0; i <= lineAmount;i++) {
        glVertex2f(
                   x + (radius * cos(i *  twicePi / lineAmount)),
                   y + (radius* sin(i * twicePi / lineAmount))
                   );
    }
    glEnd();
    glFlush();
}
 
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
   
    glColor3f(0.6,0.7,0.9);
   
    line_join(-1.0, 0.0, -0.8, 0.4);
    line_join(-1.0, 0.0, -0.6, 0.0);
    line_join(-0.6, 0.0, -0.8, 0.4);
    line_join(-0.6, 0.0, -0.6, 0.0);
    line_join(-0.6, 0.0, -0.6, -0.4);
    line_join(-0.2, -0.4, -0.6, -0.4);
    line_join(-0.2, -0.4, -0.2, 0.0);
    line_join(-0.2, 0.0, -0.6, 0.0);
    line_join(-0.2, 0.0, 0.0, 0.4);
    line_join(0.2, 0.0, 0.0, 0.4);
    line_join(-0.2, 0.0, 0.2, 0.0);
    line_join(0.2, 0.0, 0.2, -0.4);
    line_join(0.6, -0.4, 0.2, -0.4);
    line_join(0.6, -0.4, 0.6, 0.0);
    line_join(0.2, 0.0, 0.6, 0.0);
    line_join(0.8, 0.4, 0.6, 0.0);
    line_join(0.8, 0.4, 1.0, 0.0);
    line_join(0.6, 0.0, 1.0, 0.0);
   
    drawHollowCircle(-0.4, -0.2, 0.2);
    drawHollowCircle(0.4, -0.2, 0.2);
   
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(550, 550);
    glutCreateWindow("Rakshit");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
