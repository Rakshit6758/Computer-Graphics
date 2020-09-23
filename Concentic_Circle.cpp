<<<<<<< HEAD
#include <GL/glut.h>
#include <math.h>
void line_join(float x1 , float y1 , float x2 , float y2){
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);

}

void drawHollowCircle(GLfloat x, GLfloat y, GLfloat radius){
    int i;
    int lineAmount = 100; //# of triangles used to draw circl
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
void Texture_1(GLfloat r1, GLfloat r2)
{
    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;
    Ycr2 = r2;
    Ycr1 = r1;
    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)
    {
        if(c<=Ycr1 && c>=(-Ycr1))
        {
            // intersection point of outer circle
            temp = ((r2*r2)-(c*c));
            p = sqrt(temp);
            x1_out = p;
            x2_out = -p;
            y1_out = c;
            y2_out = c;
            //Intersection point of inner circle
            temp = ((r1*r1)-(c*c));
            p = sqrt(temp);
            x1_in = p;
            x2_in = -p;
            y1_in = c;
            y2_in = c;
            line_join(x1_out, y1_out, x1_in, y1_in);
            line_join(x2_in, y2_in, x2_out, y2_out);
        }
        else
        {
            temp = ((r2*r2)-(c*c));
            p = sqrt(temp);
            x1_out = p;
            x2_out = -p;
            y1_out = c;
           y2_out = c;
          line_join(x1_out, y1_out, x2_out, y2_out);
        }
    }
}
void Texture_2(GLfloat r1, GLfloat r2)
{
    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;
    Ycr2 = 1.414 * r2;
    Ycr1 = 1.414 * r1;
    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)
    {
        if(c<=Ycr1 && c>=(-Ycr1))
        {
           // intersection point of outer circle
            temp = ((2*r2*r2)-(c*c))/4;
            p = sqrt(temp);
            x1_out = p - (c/2);
            x2_out = -(p + (c/2));
            y1_out = p + (c/2);
            y2_out = (c/2) - p;
            //Intersection point of inner circle
            temp = ((2*r1*r1)-(c*c))/4;
            p = sqrt(temp);
            x1_in = p - (c/2);
            x2_in = -(p + (c/2));
            y1_in = p + (c/2);
            y2_in = (c/2) - p;
            line_join(x1_out, y1_out, x1_in, y1_in);
            line_join(x2_in, y2_in, x2_out, y2_out);
        }
        else
        {
            temp = ((2*r2*r2)-(c*c))/4;
            p = sqrt(temp);
            x1_out = p - (c/2);
            x2_out = -(p + (c/2));
            y1_out = p + (c/2);
            y2_out = (c/2) - p;
            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_3(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p + (c/2);

            x2_in = (-p) + (c/2);

            y1_in = (-p) + (c/2);

            y2_in = (c/2) + p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_4(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, p_in, p_out, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = r2;

    Ycr1 = r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((r2*r2)-(c*c));

            p_out = sqrt(temp);

            x1_out = c;

            x2_out = c;

            y1_out = p_out;

            y2_out = -p_out;

           

            //Intersection point of inner circle

            temp = ((r1*r1)-(c*c));

            p_in= sqrt(temp);

            x1_in = c;

            x2_in = c;

            y1_in = p_in;

            y2_in = -p_in;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((r2*r2)-(c*c));

            p = sqrt(temp);

            x1_out = c;

            x2_out = c;

            y1_out = -p;

            y2_out = p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_5(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.05)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p - (c/2);

            x2_in = -(p + (c/2));

            y1_in = p + (c/2);

            y2_in = (c/2) - p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_6(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.05)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p + (c/2);

            x2_in = (-p) + (c/2);

            y1_in = (-p) + (c/2);

            y2_in = (c/2) + p;

            

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_7(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.015)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p - (c/2);

            x2_in = -(p + (c/2));

            y1_in = p + (c/2);

            y2_in = (c/2) - p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_8(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.015)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p + (c/2);

            x2_in = (-p) + (c/2);

            y1_in = (-p) + (c/2);

            y2_in = (c/2) + p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_9(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = r2;

    Ycr1 = r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((r2*r2)-(c*c));

            p = sqrt(temp);

            x1_out = p;

            x2_out = -p;

            y1_out = c;

            y2_out = c;

           

            //Intersection point of inner circle

            temp = ((r1*r1)-(c*c));

            p = sqrt(temp);

            x1_in = p;

            x2_in = -p;

            y1_in = c;

            y2_in = c;

           

            for(GLfloat i=x2_out; i<x2_in; i=i+0.020)

            {

                glBegin(GL_POINTS);

                glVertex2f(i,c);

            }

           

            for(GLfloat j=x1_in; j<x1_out; j=j+0.020)

            {

                glBegin(GL_POINTS);

                //glVertex2f(j,c);

            }

           

           

            //line_join(x1_out, y1_out, x1_in, y1_in);

            //line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((r2*r2)-(c*c));

            p = sqrt(temp);

            x1_out = p;

            x2_out = -p;

            y1_out = c;

            y2_out = c;

            //line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void displayMe(void)

{

    glClear(GL_COLOR_BUFFER_BIT);

   

    glColor3f(0.0,1.0,0.0);

    Texture_1(0.10, 0.20);

   

    glColor3f(0.0,1.0,1.0);

    Texture_2(0.20, 0.30);

   

    glColor3f(1.0,0.0,0.0);

    Texture_2(0.30, 0.40);

   

    glColor3f(1.0,0.0,1.0);

    Texture_3(0.40, 0.50);

   

    glColor3f(0.98,0.625,0.12);

    Texture_3(0.50, 0.60);

   

    glColor3f(1.0,1.0,1.0);

    Texture_1(0.60, 0.70);

    Texture_4(0.60, 0.70);

   

    glColor3f(0.50,0.50,0.50);

    Texture_5(0.70, 0.80);

    Texture_6(0.70, 0.80);

   

    glColor3f(0.60,0.40,0.70);

    Texture_7(0.80, 0.90);

    Texture_8(0.80, 0.90);

   

    glColor3f(0.60,0.40,0.70);

    //Texture_9(0.90, 1.00);

   

   

    glColor3f(1.0,1.0,1.0);

    drawHollowCircle(0.0, 0.0, 0.10);

    drawHollowCircle(0.0, 0.0, 0.20);

    drawHollowCircle(0.0, 0.0, 0.30);

    drawHollowCircle(0.0, 0.0, 0.40);

    drawHollowCircle(0.0, 0.0, 0.50);

    drawHollowCircle(0.0, 0.0, 0.60);

    drawHollowCircle(0.0, 0.0, 0.70);

    drawHollowCircle(0.0, 0.0, 0.80);

    drawHollowCircle(0.0, 0.0, 0.90);

    drawHollowCircle(0.0, 0.0, 1.00);

   

   

}

 

int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowSize(550, 550);

    glutCreateWindow("Concentric Circles");

    glutDisplayFunc(displayMe);

    glutMainLoop();

    return 0;

=======
#include <GL/glut.h>
#include <math.h>
void line_join(float x1 , float y1 , float x2 , float y2){
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);

}

void drawHollowCircle(GLfloat x, GLfloat y, GLfloat radius){
    int i;
    int lineAmount = 100; //# of triangles used to draw circl
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
void Texture_1(GLfloat r1, GLfloat r2)
{
    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;
    Ycr2 = r2;
    Ycr1 = r1;
    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)
    {
        if(c<=Ycr1 && c>=(-Ycr1))
        {
            // intersection point of outer circle
            temp = ((r2*r2)-(c*c));
            p = sqrt(temp);
            x1_out = p;
            x2_out = -p;
            y1_out = c;
            y2_out = c;
            //Intersection point of inner circle
            temp = ((r1*r1)-(c*c));
            p = sqrt(temp);
            x1_in = p;
            x2_in = -p;
            y1_in = c;
            y2_in = c;
            line_join(x1_out, y1_out, x1_in, y1_in);
            line_join(x2_in, y2_in, x2_out, y2_out);
        }
        else
        {
            temp = ((r2*r2)-(c*c));
            p = sqrt(temp);
            x1_out = p;
            x2_out = -p;
            y1_out = c;
           y2_out = c;
          line_join(x1_out, y1_out, x2_out, y2_out);
        }
    }
}
void Texture_2(GLfloat r1, GLfloat r2)
{
    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;
    Ycr2 = 1.414 * r2;
    Ycr1 = 1.414 * r1;
    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)
    {
        if(c<=Ycr1 && c>=(-Ycr1))
        {
           // intersection point of outer circle
            temp = ((2*r2*r2)-(c*c))/4;
            p = sqrt(temp);
            x1_out = p - (c/2);
            x2_out = -(p + (c/2));
            y1_out = p + (c/2);
            y2_out = (c/2) - p;
            //Intersection point of inner circle
            temp = ((2*r1*r1)-(c*c))/4;
            p = sqrt(temp);
            x1_in = p - (c/2);
            x2_in = -(p + (c/2));
            y1_in = p + (c/2);
            y2_in = (c/2) - p;
            line_join(x1_out, y1_out, x1_in, y1_in);
            line_join(x2_in, y2_in, x2_out, y2_out);
        }
        else
        {
            temp = ((2*r2*r2)-(c*c))/4;
            p = sqrt(temp);
            x1_out = p - (c/2);
            x2_out = -(p + (c/2));
            y1_out = p + (c/2);
            y2_out = (c/2) - p;
            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_3(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p + (c/2);

            x2_in = (-p) + (c/2);

            y1_in = (-p) + (c/2);

            y2_in = (c/2) + p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_4(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, p_in, p_out, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = r2;

    Ycr1 = r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((r2*r2)-(c*c));

            p_out = sqrt(temp);

            x1_out = c;

            x2_out = c;

            y1_out = p_out;

            y2_out = -p_out;

           

            //Intersection point of inner circle

            temp = ((r1*r1)-(c*c));

            p_in= sqrt(temp);

            x1_in = c;

            x2_in = c;

            y1_in = p_in;

            y2_in = -p_in;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((r2*r2)-(c*c));

            p = sqrt(temp);

            x1_out = c;

            x2_out = c;

            y1_out = -p;

            y2_out = p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_5(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.05)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p - (c/2);

            x2_in = -(p + (c/2));

            y1_in = p + (c/2);

            y2_in = (c/2) - p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_6(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.05)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p + (c/2);

            x2_in = (-p) + (c/2);

            y1_in = (-p) + (c/2);

            y2_in = (c/2) + p;

            

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_7(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.015)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p - (c/2);

            x2_in = -(p + (c/2));

            y1_in = p + (c/2);

            y2_in = (c/2) - p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p - (c/2);

            x2_out = -(p + (c/2));

            y1_out = p + (c/2);

            y2_out = (c/2) - p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_8(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = 1.414 * r2;

    Ycr1 = 1.414 * r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.015)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

           

            //Intersection point of inner circle

            temp = ((2*r1*r1)-(c*c))/4;

            p = sqrt(temp);

            x1_in = p + (c/2);

            x2_in = (-p) + (c/2);

            y1_in = (-p) + (c/2);

            y2_in = (c/2) + p;

           

            line_join(x1_out, y1_out, x1_in, y1_in);

            line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((2*r2*r2)-(c*c))/4;

            p = sqrt(temp);

            x1_out = p + (c/2);

            x2_out = (-p) + (c/2);

            y1_out = (-p) + (c/2);

            y2_out = (c/2) + p;

            line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void Texture_9(GLfloat r1, GLfloat r2)

{

    GLfloat Ycr2, Ycr1, temp, p, x1_out, x2_out, y1_out, y2_out, x1_in, x2_in, y1_in, y2_in;

    Ycr2 = r2;

    Ycr1 = r1;

    for(GLfloat c=Ycr2; c>(-Ycr2); c=c-0.02)

    {

        if(c<=Ycr1 && c>=(-Ycr1))

        {

            // intersection point of outer circle

            temp = ((r2*r2)-(c*c));

            p = sqrt(temp);

            x1_out = p;

            x2_out = -p;

            y1_out = c;

            y2_out = c;

           

            //Intersection point of inner circle

            temp = ((r1*r1)-(c*c));

            p = sqrt(temp);

            x1_in = p;

            x2_in = -p;

            y1_in = c;

            y2_in = c;

           

            for(GLfloat i=x2_out; i<x2_in; i=i+0.020)

            {

                glBegin(GL_POINTS);

                glVertex2f(i,c);

            }

           

            for(GLfloat j=x1_in; j<x1_out; j=j+0.020)

            {

                glBegin(GL_POINTS);

                //glVertex2f(j,c);

            }

           

           

            //line_join(x1_out, y1_out, x1_in, y1_in);

            //line_join(x2_in, y2_in, x2_out, y2_out);

        }

       

        else

        {

            temp = ((r2*r2)-(c*c));

            p = sqrt(temp);

            x1_out = p;

            x2_out = -p;

            y1_out = c;

            y2_out = c;

            //line_join(x1_out, y1_out, x2_out, y2_out);

        }

       

    }

}

 

void displayMe(void)

{

    glClear(GL_COLOR_BUFFER_BIT);

   

    glColor3f(0.0,1.0,0.0);

    Texture_1(0.10, 0.20);

   

    glColor3f(0.0,1.0,1.0);

    Texture_2(0.20, 0.30);

   

    glColor3f(1.0,0.0,0.0);

    Texture_2(0.30, 0.40);

   

    glColor3f(1.0,0.0,1.0);

    Texture_3(0.40, 0.50);

   

    glColor3f(0.98,0.625,0.12);

    Texture_3(0.50, 0.60);

   

    glColor3f(1.0,1.0,1.0);

    Texture_1(0.60, 0.70);

    Texture_4(0.60, 0.70);

   

    glColor3f(0.50,0.50,0.50);

    Texture_5(0.70, 0.80);

    Texture_6(0.70, 0.80);

   

    glColor3f(0.60,0.40,0.70);

    Texture_7(0.80, 0.90);

    Texture_8(0.80, 0.90);

   

    glColor3f(0.60,0.40,0.70);

    //Texture_9(0.90, 1.00);

   

   

    glColor3f(1.0,1.0,1.0);

    drawHollowCircle(0.0, 0.0, 0.10);

    drawHollowCircle(0.0, 0.0, 0.20);

    drawHollowCircle(0.0, 0.0, 0.30);

    drawHollowCircle(0.0, 0.0, 0.40);

    drawHollowCircle(0.0, 0.0, 0.50);

    drawHollowCircle(0.0, 0.0, 0.60);

    drawHollowCircle(0.0, 0.0, 0.70);

    drawHollowCircle(0.0, 0.0, 0.80);

    drawHollowCircle(0.0, 0.0, 0.90);

    drawHollowCircle(0.0, 0.0, 1.00);

   

   

}

 

int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowSize(550, 550);

    glutCreateWindow("Concentric Circles");

    glutDisplayFunc(displayMe);

    glutMainLoop();

    return 0;

>>>>>>> c2355f7ba69b19ad1f02d1e56656b172ed3e727d
}